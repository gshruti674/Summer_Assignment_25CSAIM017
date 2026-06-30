#include<stdio.h>
int main()
{
    char str[]="hello";
    int i,v=0,c=0;
    for(i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        v++;
        else
        c++;
    }
    printf("vowels=%d\nconsonants=%d",v,c);
    return 0;
}