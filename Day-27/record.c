#include<stdio.h>
struct student
{
int roll;
char name[20];
float marks;
};
int main()
{
    struct student s;
    printf("enter roll no.");
    scanf("%d",&s.roll);
    printf("enter name");
    scanf("%s",&s.name);
    printf("enter marks");
    scanf("%f",&s.marks);
    printf("student record");
    printf("roll no:%d\n",s.roll);
    printf("name:%s\n",s.name);
    printf("marks:%2f",s.marks);
    return 0;
   }
       