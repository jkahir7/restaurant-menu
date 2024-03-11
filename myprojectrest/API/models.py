from django.db import models

# Create your models here.
class student(models.Model):
    username=models.CharField(max_length=50)
    city=models.CharField(max_length=50)
    subject=models.CharField(max_length=50)

    def __str__(self) -> str:
        return self.username