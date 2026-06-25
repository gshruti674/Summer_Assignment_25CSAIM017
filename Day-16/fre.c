#include<stdio.h>
int main()
{
    int arr[]={1,2,2,3,2,4};
    int n=6,i,j,count, maxcount=0,element;
    for(i=0;i<n;i++)
    {count=1;
    for(j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        count++;
    }
    if(count>maxcount)
    {
        maxcount=count;
        element=arr[i];
    }
}
printf("element=%d\nfrequency=%d",element,maxcount);
return 0;

}