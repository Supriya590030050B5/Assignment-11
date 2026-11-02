#include <stdio.h>

extern int num;  // Access global variable

int main()
{
    printf("Before modification: %d\n", num);

    num = 50;  // Modify global variable

    printf("After modification: %d\n", num);

    return 0;
}