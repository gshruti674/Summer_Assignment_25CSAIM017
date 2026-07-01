#include<stdio.h>
int main()
{
    char str[100];
    int i,words=1;
    printf("enter sentence");
    fgets(str,sizeof(str),stdin);
    for(i=1;str[i]!='\0';i++)
    {
        if(str[i] == ' ')
        words++;
    }
    printf("words=%d",words);
    return 0;
}