#include<stdio.h>
int main()
{
    char book[5][30];
    int n,i;
    printf("enter no.of books");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { printf("enter book name");
    scanf("%s",&book[i]);
        
    }   
        printf("available book");
        for(i=0;i<n;i++)
        {
        printf(" %s\n",book[i]);
    }
    return 0;
}