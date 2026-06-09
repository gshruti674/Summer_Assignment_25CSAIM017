#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}