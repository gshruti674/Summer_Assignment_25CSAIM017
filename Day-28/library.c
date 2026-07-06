#include<stdio.h>
struct book
{
int id;
char name[30];
};
int main()
{
    struct book b[5];
    int n,i;
    printf("no. of books");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter book id");
    scanf("%d",&b[i].id);
    printf("enter book name");
    scanf("%s",b[i].name);
    }
    printf("library record");
    for(i=0;i<n;i++){
    printf("%d%s\n",b[i].id,b[i].name);
    }
    
    return 0;
   }