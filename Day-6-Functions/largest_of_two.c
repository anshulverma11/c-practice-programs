#include <stdio.h>

/*
 This function returns the larger of two numbers.
*/
int findLargest(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y, largest;

    // Take input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Call the function
    largest = findLargest(x, y);

    // Display result
    printf("Largest number is: %d\n", largest);

    return 0;
}

