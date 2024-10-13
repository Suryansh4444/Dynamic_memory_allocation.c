#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if allocation fails
    }

    // Initialize the array
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Display the array
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Release the allocated memory
    arr = NULL; // Avoid dangling pointer

    return 0;
}
