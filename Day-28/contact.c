#include<stdio.h>
struct contact
{
long long phone;
char name[30];
};
int main()
{
    struct contact c[5];
    int n,i;
    printf("no. of contacts");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter name");
    scanf("%s",&c[i].name);
    printf("enter phone");
    scanf("%lld",c[i].phone);
    }
    printf("contact list");
    for(i=0;i<n;i++){
    printf("%s-%lld\n",c[i].name,c[i].phone);
    }
    
    return 0;
   }