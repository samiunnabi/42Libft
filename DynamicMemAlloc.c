#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter the size of the array: ");
    int size;
    scanf("%d", &size);

    // Allocate memory for the dynamic array
    int *dynamicArray = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1; // Exit with an error code
    }

    // Input elements into the dynamic array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &dynamicArray[i]);
    }

    // Output the elements of the dynamic array
    printf("Elements in the array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", dynamicArray[i]);
    }

    // Free the dynamically allocated memory
    free(dynamicArray);

    return 0; // Exit successfully
}

// The main idea here is that in Dynamic memalloc memory is allocated during runtime (programs operation)
// The program asks the user for an input of x number of elements in an array (size of array)
// After getting the input the program goes to int *dynamicArray = (int *)malloc(size * sizeof(int));
// Over here the program based on the users input allocates mem to the program
// If the user inputs 5 it will be int *dynamicArray = (int *)malloc(5 * sizeof(int));
// The lifespan of DMA is as long as the memory allocated is not freed

// On the other hand in Standard MemAlloc the user has to input the size and data type of var b4 runtime
// int x = 69 so that the compiler knows it before execution and allocates memory before running
// So mem in staticmemalloc is allocated during compilation and not during runtime
// The lifespan of static is during the programs duration

