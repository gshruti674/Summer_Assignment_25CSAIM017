#include<stdio.h>
int main()
{
    int a,b,x,y,gcd;
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(y!=0)
{
    int temp=y;
    y=x%y;
    x=temp;

}
gcd=x;
printf("lcm=%d",(a*b)/gcd);
return 0;

}