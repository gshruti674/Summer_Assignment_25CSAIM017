#include<stdio.h>
int main()
{
    int n,org,rev=0,rem;
    printf("enter no.");
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(org=rev)
    printf("no. is palindrome");
    else
    printf("not");
    return 0;
}