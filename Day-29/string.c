#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string");
    scanf("%s",&str);
    printf("length=%d\n",strlen(str));
    printf("uppercase");
    for(int i=0;str[i]!='\0';i++)
    {
    if(str[i]>='a'&&str[i]<='z')
    str[i]=str[i]-32;
    
        printf("%c",str[i]);
    }
        
    return 0;
}