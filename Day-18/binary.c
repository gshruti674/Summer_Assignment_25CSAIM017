#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5,6,7};
    int low=0,high=6,mid,key=5;

    while(low<=high) {
        mid=(low+high)/2;

        if(arr[mid]==key) {
            printf("Found");
            return 0;
        }

        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    printf("Not Found");

    return 0;
}