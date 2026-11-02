#include <stdio.h>

// Function that generates a unique ID
int generateUniqueId(void) {
    static int id = 100; // Static variable retains its value between function calls
    id++;                // Increment the ID on each call
    return id;
}

int main(void) {
    // Demonstrating ID generation across multiple function calls
    printf("User 1 ID: %d\n", generateUniqueId());
    printf("User 2 ID: %d\n", generateUniqueId());
    printf("User 3 ID: %d\n", generateUniqueId());
    printf("User 4 ID: %d\n", generateUniqueId());

    return 0;
}