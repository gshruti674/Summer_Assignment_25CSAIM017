#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("enter a no.");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;

    }
    printf("sum of digits of a no:%d",sum);
    return 0;
}