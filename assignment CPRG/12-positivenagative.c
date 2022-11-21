#include<stdio.h>
main()
{
	int num;
	printf("enter a value of num=");
	scanf("%d",&num);
	if(num>0)
	{
		printf("number are positive");
	}
	else if (num<0)
	{
		printf("number are nagative");
	}
	else
	{
		printf("number are 0");
	}
}
