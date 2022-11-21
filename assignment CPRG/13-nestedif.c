#include<stdio.h>
main()
{ 
 	int num;
 	printf("enter number :");
 	scanf("%d",&num);
 	
 	if(num>14)
 	{
 		if (num>=18)
		{
		printf("max");
		}		 
		 else
			{
			 	printf("mid");
			}
	}
	else
	{
		
				 if(num<5)
				 {
				 	printf("minimum");
				 }
				 else
				 {
				 	printf("something is wrong");
				 }
	 
	}


}
