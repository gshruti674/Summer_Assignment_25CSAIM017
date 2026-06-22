#include<stdio.h>
int armstrong(int n)
{
    int c=n,sum=0,r;
    while(c>0)
    {
        r=c%10;
sum+=r*r*r;
c/=10;
    }
    return sum==n;
}
int main()
{
    int n=154;
    if(armstrong(n))
    printf("armstrong no.");
    else
    printf("not");
    return 0;
}