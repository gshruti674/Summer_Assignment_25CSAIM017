#include<stdio.h>
int main()
{
    int arr[]={1,2,2,3,2,3,4,5,6},n=9,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            break;
        }
        if(i==j)
            printf("%d",arr[i]);
    }
    return 0;
}