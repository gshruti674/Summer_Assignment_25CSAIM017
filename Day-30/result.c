#include<stdio.h>
int main()
{
    int roll;
    char name[30];
    float m1,m2,m3,total,per;
    printf("enter roll no.");
    scanf("%d",&roll);
    printf("emter name");
    scanf("%s",&name);
    printf("enter marks");
    scanf("%f %f %f",&m1,&m2,&m3);
    total=m1+m2+m3;
    per=total/3;
    printf("student record");
    printf("%d",roll);
    printf("%s",name);
    printf("%2f",total);
    printf("%2f%%\n",per);
    if(per>=40)
    printf("pass");
    else
    printf("fail");
    return 0;
}