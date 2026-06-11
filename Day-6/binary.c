#include<stdio.h>
int main()
{
    int n,binary[64],i=0;
    printf("enter decimal no.");
    scanf("%d",&n);
    while(n>0)
    {
        binary[i]=n%2;
        n=n/2;
        i++;

    }
    printf("binary =");
    for(i=1;i>=0;i--)
    printf("%d",binary[i]);
    return 0;
}