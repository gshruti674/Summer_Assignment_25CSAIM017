#include <stdio.h>

int main() {
    int arr[]={5,1,4,2,3};
    int i,j,temp,n=5;

    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]<arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}