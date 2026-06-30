#include <stdio.h>

int main() {
    int a[]={1,2,3,4};
    int b[]={2,4,6,8};
    int i,j;

    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            if(a[i]==b[j])
                printf("%d ",a[i]);
        }
    }

    return 0;
}