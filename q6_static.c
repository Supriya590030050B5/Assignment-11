
#include <stdio.h>

static int num = 100;  // Static global variable

void display()
{
    printf("Value of num = %d\n", num);
}

int main()
{
    display();
    printf("Static global variable = %d\n", num);

    return 0;
}
