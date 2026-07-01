#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;
    }

    for(i = 0; i < 26; i++) {
        if(count[i] > max) {
            max = count[i];
            maxChar = i + 'a';
        }
    }

    printf("%c\n", maxChar);
    printf(" %d\n", max);

    return 0;
}