#include<stdio.h>
int main()
{
    int arr[6]={1,0,3,0,5,0},i,count=0;
    for(i=0;i<6;i++)
    {
        if(arr[i]!=0)
        arr[count++]=arr[i];
    }
    while(count<6)
    arr[count++]=0;
    for(i=0;i<6;i++)
    printf("%d",arr[i]);
    return 0;
}