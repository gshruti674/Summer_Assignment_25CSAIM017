#include<stdio.h>
struct item
{
    int id;
    char name[30];
    int qty;
};
int main()
{
    struct item item[5];
    int n,i;
    printf("enter no.of items");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("/nitem%d\n",i+1);
    
    printf("enter id");
    scanf("%d",&item[i].id);
        printf("enter name");
        scanf("%s",item[i].name);
        printf("enter qty");
        scanf("%d",item[i].qty);
    }   
        printf("inventory list");
        for(i=0;i<n;i++)
        {
        printf("%d%s%d",item[i].id,item[i].name,item[i].qty);
    }
    return 0;
}