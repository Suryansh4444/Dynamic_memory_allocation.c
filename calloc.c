#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)calloc(5, sizeof(int)); // Allocate memory for 5 integers, initialized to 0
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if allocation fails
    }

    // Display the array (should all be 0)
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Release the allocated memory
    return 0;
}
