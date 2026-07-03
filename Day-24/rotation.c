#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20], temp[40];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    
    
    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2))
        printf("rotation");
    else
        printf("Not");

    return 0;
}