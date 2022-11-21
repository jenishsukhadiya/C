#include<stdio.h>
main()
{
	int l,r,b,h;
	int ans;
	
	printf("enter a value is r=");  //circle
	scanf("%d",&r);
	ans=3.14*r*r;
	printf("\n ans of circle is=%d",ans);
	
	printf("\nenter a value is l=");  //rectengle
	scanf("%d",&l);
	printf("\nenter a value is b=");  
	scanf("%d",&b);
	ans=l*b;
	printf("\n ans of rectengle is=%d",ans);
	
	printf("\nenter a value is h=");  //triangle
	scanf("%d",&h);
	printf("\nenter a value is b=");  
	scanf("%d",&b);
	ans=h*b/2;
	printf("\n ans of triangle is=%d",ans);
	
}
