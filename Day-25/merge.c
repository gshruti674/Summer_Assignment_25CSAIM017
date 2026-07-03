#include<stdio.h>
int main()
{
    int a[3]={1,3,5};
    int b[3]={2,4,6};
    int i;
    printf("merge array");
    for(i=0;i<3;i++)
    printf("%d",a[i]);
    for(i=0;i<3;i++)
    printf("%d",b[i]);
    return 0;
}