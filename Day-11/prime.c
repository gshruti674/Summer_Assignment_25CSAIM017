#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<=1)
    return 0;
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    return 0;
    }
    return 1;
}
int main()
{
    int n=16;
    if(prime(n))
    printf ("prime");
    else
    printf("not");
    return 0;
}