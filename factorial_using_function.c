#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num, result;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling factorial function
    result = factorial(num);

    // Printing result
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}

