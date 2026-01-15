#include <stdio.h>

int main() {
    // Declare an array of 5 integers
    int arr[5] = {10, 20, 30, 40, 50};

    // Loop to print each element
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

