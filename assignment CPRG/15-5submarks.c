#include<stdio.h>
main()
{
	int marks;
	printf("enter a marks=");
	scanf("%d",&marks);
	if(marks>=75)
	{
		printf("DISTICTION");
	}
	else if(marks>60 && marks<=75)
	{
		printf("FIRST CLASS");
		
	}
	else if(marks>50 &&marks<=60)
	{
		printf("second class");
	}
	else if (marks>35 && marks<=50)
	{
		printf("pass");
	}
	else
	{
		printf("are you fail");
	}
	
	/*	if( 60<=75)
		{
			printf("first class");
		}
		{
			printf("destination");
		}
	else
	{
	
		if( 35<=60)
		{
		printf("pass class");
		}
		else(  0>=35)
		{
		printf("fails");
		}
	}*/
}
