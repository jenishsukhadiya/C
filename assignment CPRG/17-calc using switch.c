#include<stdio.h>
char main()
{
	int a=5,b=10,c;
	char ch;
	
	printf("enter your number=");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
		c=a+b;
		printf("add=%d",c);
		break;
		
		case '-':
		c=a-b;
		printf("sub=%d",c);
		break;
		
		case '*':
		c=a*b;
		printf("mul=%d",c);
		break;
		
		case '/':
		c=a/b;
		printf("div=%d",c);
		break;		
		
		default:
			printf("this is default");
			break;
	}
}
