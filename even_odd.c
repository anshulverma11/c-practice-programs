#include <stdio.h>

int main() {

    // Variable to store the number entered by the user
    int number;

    // Asking user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking whether the number is even or odd
    if (number % 2 == 0) {
        printf("The number is Even\n");
    } else {
        printf("The number is Odd\n");
    }

    return 0;   // End of program
}

