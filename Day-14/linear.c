#include <stdio.h>

int main() {
    int arr[5], i, key, found = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}