#include <stdio.h>

int main() {
    int arr[5], max;

    // Input array elements
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is largest
    max = arr[0];

    // Compare with remaining elements
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element = %d\n", max);

    return 0;
}

