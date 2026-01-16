#include <stdio.h>

/*
 This function checks whether a number is even or odd.
 It takes one integer and prints the result.
*/
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("The number is Even\n");
    else
        printf("The number is Odd\n");
}

int main() {
    int number;

    // Ask user for a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function
    checkEvenOdd(number);

    return 0;
}

