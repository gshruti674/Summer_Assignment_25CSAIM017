#include <stdio.h>

int main() {
    int balance = 1000;
    int amount;

    printf("Enter withdrawal money");
    scanf("%d",&amount);

    if(amount<=balance) 
    {
    balance=balance-amount;
        printf("Balance = %d", balance);
    }

    else 
     {
        printf("insufficient balance ");
    }


    return 0;
}