#include <stdio.h>

int main() {
    int num;

    // Asking user for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to print multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

