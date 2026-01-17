#include <stdio.h>

int main() {
    int number = 10;        // Normal integer variable
    int *ptr;               // Pointer variable

    ptr = &number;          // Pointer stores address of number

    // Printing value and address
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);

    // Using pointer
    printf("Value using pointer: %d\n", *ptr);
    printf("Address stored in pointer: %p\n", ptr);

    return 0;
}

