#include<stdio.h>
int main()
{
    int n,rem,prod=1;
    printf("enter no.");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        prod*=rem;
        n=n/10;

    }
    printf("%d",prod);
    return 0;

}