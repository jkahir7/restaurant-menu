from django.shortcuts import render
from rest_framework.decorators import api_view
from rest_framework.response import Response
from rest_framework import status
from .models import *
from .serializers import studentserializers
# Create your views here.

@api_view(["GET"])
def studentall(request):
    if request.method == "GET":
        studentALL = student.objects.all()
        serializer = studentserializers(studentALL, many=True)
        return Response(serializer.data)
@api_view(["POST"])
def studentadd(request):
    if request.method == "POST":
        serializer = studentserializers(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_201_CREATED)
        else:
            return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
@api_view(["GET","PUT","DELETE"]) 
def student1(request,pk):
    student2=student.objects.get(id=pk)
    if request.method == "GET":
        serializer = studentserializers(student2)
        return Response(serializer.data)
    elif request.method == "PUT":
        serializer = studentserializers(student2,data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data)    
    elif request.method == "DELETE":
        student2.delete()
        return Response(status=status.HTTP_204_NO_CONTENT)
