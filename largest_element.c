#include <stdio.h>

int main() {
    int arr[5], max;

    // Taking input from user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Assuming first element is the largest
    max = arr[0];

    // Finding largest element
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element = %d\n", max);
    return 0;
}

