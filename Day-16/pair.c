#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5},n=5,sum=5,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            printf("%d%d\n",arr[i],arr[j]);
        }
    }
    return 0;
}