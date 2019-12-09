#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	int sc;
	int ed;
	int money;
	int password;
	int day;
	printf("welcome to NUK library,choose the service you want\n");
	printf("1.borrow\n");
    printf("2.return\n");
	printf("enter the service you want:\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("1.A\n");
        printf("2.B\n");
	    printf("enter the book you want:\n");
	    scanf("%d",&choice);
		if(choice==1)
		{
			 printf("enter your school number:\n");
	         scanf("%d",&sc);
             if(sc==1065503)
			 {
				 puts("OK,please return this book after 30 days,and remember this password:1231012");
				 puts("123 is code");
				 puts("1012 is date");
			 }
			 else
			 {
				 puts("error");
			 }
		}
		else
		if(choice==2)
		{
			 printf("enter your school number:\n");
	         scanf("%d",&sc);
             if(sc==1065503)
			 {
				 puts("OK,please return this book after 30 days,and remember this password:4561012");
				 puts("456 is code");
				 puts("1012 is date");
			 }
			 else
			 {
				 puts("error");
			 }
		}
		else
           {
				 puts("error");
		}
	}
	else
	if(choice==2)
	{
		printf("enter your school number:\n");
	    scanf("%d",&sc);
		if(sc==1065503)
		{
			printf("enter your password:\n");
	        scanf("%d",&password);
			if(password==1231012)
			{
				puts("the book you want to return is A");
				printf("enter the days you borrow:\n");
	            scanf("%d",&day);
				if(day<=30)
				{
					puts("OK,thank you for your return,have a nice day");
				}
				else
				{
					ed=day-30;
					money=ed*5;
					printf("the fee you should pay is %d",money);
				}
			}
			else
		    if(password==4561012)
			{
				puts("the book you want to return is B");
				printf("enter the days you borrow:\n");
	            scanf("%d",&day);
				if(day<=30)
				{
					puts("OK,thank you for your return,have a nice day");
				}
				else
				{
					ed=day-30;
					money=ed*5;
					printf("the fee you should pay is %d",money);
				}
			}
			else
			{
				puts("error");
			}
		}
		else
		{
			puts("error");
		}
	}
	else
	{
		puts("error");
	}


    
	    system("pause");
	    return 0;
}