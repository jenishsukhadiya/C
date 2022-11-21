#include<stdio.h>
int main()
{
    int n1=0,n2=1,n,c=0,i;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    printf("%d ",n1);
    c = n1+n2;
    n1=n2;
    n2=c;
    }
    
}
