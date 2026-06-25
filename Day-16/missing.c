#include<stdio.h>
int main()
{
    int arr[]={1,2,4,5};
    int n=5,sum=0,i;
     for(i=0;i<n-1;i++)
     sum+=arr[i];
     printf("missing no.=%d",n*(n+1)/2-sum);
     return 0;
}