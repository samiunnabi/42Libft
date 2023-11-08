#include <stdlib.h>
#include <stdio.h>

int main()
{
	int *ptr = (int *)malloc(sizeof(int)); // Dynamic memory allocation
	if (ptr != NULL) {
    	*ptr = 5;
    // ...
    free(ptr); // Free the allocated memory when done using it

	}
	int **ty = &ptr;
	**ty = 69;
	printf("%d", *ptr);
}
// It is good practice to make an if statement ensuring ptr is NULL
// If malloc fails then reading from a pointer that has no mem address can cause undefined behaviour
// Initialise ptr with NULL always
// For error handling make if else
// if ptr not null then else statement continues
