#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,c=1;
    printf("enter string");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            c=0;
            break;
        }
    }
    if(c)
    printf("palindrome");
    else
    printf("not");
    return 0;
}