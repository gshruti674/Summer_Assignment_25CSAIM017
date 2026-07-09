#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    float marks;
};
int main()
{
    struct student s[5];
    int n,i;
    printf("enter no.of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("/nstudent%d\n",i+1);
    
    printf("enter roll no.");
    scanf("%d",&s[i].roll);
        printf("enter name");
        scanf("%s",&s[i].name);
        printf("enter marks");
        scanf("%f",&s[i].marks);
    }   
        printf("student records");
        for(i=0;i<n;i++)
        {
        printf("%d %s %2f\n",s[i].roll,s[i].name,s[i].marks);
    }
    return 0;
}