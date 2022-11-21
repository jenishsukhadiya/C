#include<stdio.h>
main()
{
	int num1,num2,ans;
	printf("enter a value of num1=");
	scanf("%d",&num1);
	printf("enter a value of num2=");
	scanf("%d",&num2);
	ans=num1+num2;
	printf("\nans=%d",ans);	//addition
	
	ans=num1-num2;  //substrection
	printf("\nans=%d",ans);
	
	ans=num1*num2;  //multiplication
	printf("\nans=%d",ans);
	
	ans=num1%num2;  //modulo
	printf("\nans=%d",ans);	
	
}
