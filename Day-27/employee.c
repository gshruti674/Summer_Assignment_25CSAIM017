#include<stdio.h>
struct employee
{
int id;
char name[20];
float salary;
};
int main()
{
    struct employee e;
    printf("enter id");
    scanf("%d",&e.id);
    printf("enter name");
    scanf("%s",&e.name);
    printf("enter salary");
    scanf("%f",&e.salary);
    printf("emlpoyee record");
    printf("id:%d\n",e.id);
    printf("name:%s\n",e.name);
    printf("marks:%2f",e.salary);
    return 0;
   }
       