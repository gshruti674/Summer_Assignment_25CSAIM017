#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("enter string");
    scanf("%s",str); 

    printf("enter character");
    scanf(" %c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        count++;
    }
    printf("%d",count);
    return 0;
}
