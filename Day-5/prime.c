#include<stdio.h>
int main()
{
    int n,i,larg=0;
    printf("enter no");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            larg=i;
            n=n/i;
        }
    }
    printf("%d",larg);
    return 0;


}