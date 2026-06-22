#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    return b;
}
int main()
{
    printf("%d",max(25,29));
    return 0;
}