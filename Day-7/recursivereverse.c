#include<stdio.h>
int r=0;
int reverse(int n)
{
    if(n==0)
    return r;
    r= r*10 +n%10;
    return reverse(n/10);
}
int main()
{
    int n;
printf("enter no.");
scanf("%d",&n);
printf("%d",reverse(n));
return 0;
}