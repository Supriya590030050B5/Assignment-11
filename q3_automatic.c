#include <stdio.h>

void display()
{
    auto int a = 1;   // Automatic variable
    static int s = 1; // Static variable

    printf("Automatic variable = %d\n", a);
    printf("Static variable = %d\n", s);

    a++;
    s++;
}

int main()
{
    printf("First call:\n");
    display();

    printf("\nSecond call:\n");
    display();

    printf("\nThird call:\n");
    display();

    return 0;
}