#include<stdio.h>
int main()
{
    int n,i,org=0;
    printf("enter no.");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        org=1;
        break;
    }
    if(org==0)
    printf("prime no.");
    else
    printf("not");
    return 0;

}