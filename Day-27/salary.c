#include<stdio.h>
int main()
{
    float salary,bonus,total;
    printf("enter salary");
    scanf("%f",&salary);
    printf("enter bonus");
    scanf("%f",&bonus);
    total=salary+bonus;
    printf("total salary=%2f",total);
    return 0;
}