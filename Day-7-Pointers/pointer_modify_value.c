#include <stdio.h>

/*
 This program shows how a pointer can modify
 the value of a variable.
*/
int main() {
    int num = 5;        // Normal variable
    int *ptr = &num;   // Pointer storing address of num

    // Before change
    printf("Before change: %d\n", num);

    // Modify value using pointer
    *ptr = 20;

    // After change
    printf("After change: %d\n", num);

    return 0;
}

