#include <stdio.h>

// Function to calculate sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y, result;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Calling sum function
    result = sum(x, y);

    // Printing result
    printf("Sum = %d\n", result);

    return 0;
}

