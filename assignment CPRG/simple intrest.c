						/*simple intrest*/

#include<stdio.h>
main()
{
	int p,r,n,ans;
	
	printf("enter a value of p=");
	scanf("%d",&p);
	printf("enter a value of r=");
	scanf("%d",&r);
	printf("enter a value of n=");
	scanf("%d",&n);
	
	ans=p*r*n/100;
	printf("ans=%d",ans);
}
