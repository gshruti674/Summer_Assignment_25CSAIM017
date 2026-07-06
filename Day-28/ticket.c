#include<stdio.h>
int main()
{
    float price=200;
    int tickets;
    printf("enter no.of tickets");
    scanf("%d",&tickets);
   
    printf("final amount=%2f",tickets*price);
    return 0;
}