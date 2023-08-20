#include<stdio.h>

int main()

{
	int choice,qty,i;
	int total_amount=0;
	int net=0;
	menu:
		printf("menu card \n");
		printf("1.pizza        Rs:180\n");
		printf("2.burger       Rs:100\n");
		printf("3.dosa         Rs:120 \n");
		printf("4.idli         Rs:50\n");
		printf("enter your choice : ");
		scanf("%d",&choice);
		printf("\n");
		printf("\n");
		
		switch(choice)
		{
			case 1:
				printf("you have selected pizza \n ");
				printf("enter your qty :");
				scanf("%d",&qty);
				printf("amount : 180 \n");
				net=net+(qty*180);
				printf("total amount is :%d \n",net);
				break;
			
			case 2:
				printf("you have selected burger \n");
				printf("enter your qty : ");
				scanf("%d",&qty);
				printf("amount : 100 \n");
				net=net+(qty*100);
				printf("total amount is :%d \n",net);
				break;
				
				
			case 3:
				printf("you have selected dosa \n");
				printf("enter your qty : ");
				scanf("%d",&qty);
				printf("amount : 120 \n");
				net=net+(qty*120);
				printf("total amount is :%d \n",net);
				break;
				
			case 4:
				printf("you have selected idli \n");
				printf("enter your qty : ");
				scanf("%d",&qty);
				printf("amount : 50\n");
				net=net+(qty*50);
				printf("total amount is :%d \n",net);
				break;
			default:
				printf("item is not available \n");
		}
		
		printf("do you want place orders ? press 1 for menu and 2 for not: \n");
		scanf("%d",&i);
		if(i==1)
		{
			goto menu;
		}
//		printf("total amount : %d \n",net);
		
}
