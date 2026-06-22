#include<stdio.h>
long long factorial(int n)
{
long long fact=1;
int i;
for(i=1;i<=n;i++)
fact*=i;
return fact;
}
int main()
{
    printf("%lld",factorial(6));
    return 0;
}