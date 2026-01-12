#include <stdio.h>

int main() {
    int n, sum = 0;

    // Asking user for a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate sum
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d numbers = %d\n", n, sum);
    return 0;
}


