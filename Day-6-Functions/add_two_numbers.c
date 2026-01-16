#include <stdio.h>

/*
 This function adds two numbers.
 It receives two integers and returns their sum.
*/
int add(int a, int b) {
    return a + b;  // returning the result
}

int main() {
    int x, y, result;

    // Asking user for input
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Calling the function
    result = add(x, y);

    // Printing the result
    printf("Sum = %d\n", result);

    return 0;
}

