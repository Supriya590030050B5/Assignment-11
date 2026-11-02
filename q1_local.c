#include <stdio.h>

int main()
{
    printf("Entering the outer block\n");

    {
        auto int a = 10;
        printf("Value of a = %d\n", a);
    }

    printf("Exited the inner block\n");

    {
        auto int b = 20;
        printf("Value of b = %d\n", b);
    }

    printf("Exited the outer block\n");

    return 0;
}