#include<stdio.h>
int main()
{
    int n,x,i;
    long long result=1;
    printf("enter x and n");
    scanf("%d%d",&x,&n);
    for(i=0;i<=n;i++)
    {
        result*=x;

    }
    printf("%lld",result);
    return 0;
}