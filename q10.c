#include <stdio.h>

extern void deposit(float amount);
extern void withdraw(float amount);
extern void checkBalance();

int main()
{
    printf("Bank Balance Management System\n");

    checkBalance();

    deposit(500.0);

    withdraw(200.0);

    checkBalance();

    return 0;
}