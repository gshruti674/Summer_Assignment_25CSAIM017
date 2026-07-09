#include<stdio.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct employee e[5];
    int n,i;
    printf("enter no.of employees");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("/nemployee%d\n",i+1);
    
    printf("enter id");
    scanf("%d",&e[i].id);
        printf("enter name");
        scanf("%s",&e[i].name);
        printf("enter salary");
        scanf("%f",&e[i].salary);
    }   
        printf("employee records");
        for(i=0;i<n;i++)
        {
        printf("%d %s %2f\n",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}