#include<stdio.h>
main()
{
	int i,j,rows;
	 
	 printf("ENTER A NUMBER OF ROWS :");
	 scanf("%d",&rows);
	 
	 for (i=1;i,i<=rows;i++)
	 {
	 	for (j=1;j<=i;j++)
	 	{
	 		printf("%d",j);
		 }
		 printf("\n");
	 }
}
