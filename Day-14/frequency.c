#include <stdio.h>

int main() {
    int arr[5], i, key, count = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(arr[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}