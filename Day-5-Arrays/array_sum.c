#include <stdio.h>

int main() {
    int arr[5], sum = 0;

    // Taking input from user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // adding each element
    }

    // Printing total sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}

