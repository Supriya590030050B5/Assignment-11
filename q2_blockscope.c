#include <stdio.h>
int x = 100;

int main()
{
    printf("Global x = %d\n", x);
    {
        int x = 50;  // Local variable x shadows the global x
        printf("Local x = %d\n", x);
    }
    printf("Global x = %d\n", x);
    return 0;
}