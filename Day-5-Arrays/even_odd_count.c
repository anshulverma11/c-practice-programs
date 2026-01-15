#include <stdio.h>

int main() {
    int arr[5], even = 0, odd = 0;

    // Input array elements
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);

        // Check even or odd
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}

