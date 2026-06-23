#include<stdio.h>
int main()
{
    int arr[5],i,c;
    printf("array elements");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    c=arr[0];
    for(i=0;i<4;i++)
    arr[i]=arr[i+1];
    arr[4]=c;
    for(i=0;i<5;i++)
    printf("%d",arr[i]);
    return 0;
}