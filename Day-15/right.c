#include<stdio.h>
int main()
{
    int arr[6],i,c;
    printf ("array elements");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    c=arr[5];
    for(i=5;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=c;
    for(i=0;i<6;i++)
    printf("%d",arr[i]);
    return 0;

}