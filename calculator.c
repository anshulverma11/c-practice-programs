#include <stdio.h>

int main() {

    // Variables to store numbers and operator
    int num1, num2;
    char operator;

    // Asking user to enter first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Asking user to enter second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Asking user to choose an operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Performing calculation based on operator
    if (operator == '+') {
        printf("Result = %d\n", num1 + num2);
    }
    else if (operator == '-') {
        printf("Result = %d\n", num1 - num2);
    }
    else if (operator == '*') {
        printf("Result = %d\n", num1 * num2);
    }
    else if (operator == '/') {
        if (num2 != 0)
            printf("Result = %d\n", num1 / num2);
        else
            printf("Division by zero is not allowed\n");
    }
    else {
        printf("Invalid operator\n");
    }

    return 0;   // End of program
}

