#include <stdio.h>

int main() {
    int arr[5], i, j;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Duplicates: ");

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}