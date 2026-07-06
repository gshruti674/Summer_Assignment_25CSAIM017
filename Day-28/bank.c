#include<stdio.h>
int main()
{
    float balance,deposit,withdraw;
    printf("enter initial balance");
    scanf("%f",&balance);
    printf("enter deposit amount");
    scanf("%f",&deposit);
    balance+=deposit;
    printf("enter withdraw amount");
    scanf("%f",&withdraw);
    if(withdraw<=balance)
    balance-=withdraw;
    else
    printf("insufficient");
    printf("final balance=%2f",balance);
    return 0;
}