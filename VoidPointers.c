
#include <stdio.h>
#include <unistd.h>

int main()
{
	int buddha = 69420;
	void *will = &buddha;
	int *mob = &buddha;

	printf("Pointer mob: %d", *mob);
	printf("\nMem Address of Buddha: %p", &buddha);
	printf("\nMem Address of will: %p", &will);
	printf("\nValue inside pointer will: %p", (int*)will);
	// printf("\nMem Address of pointer will: %p", (int*)&will);
	printf("\nValue pointed to by will: %d", *(int*)will);
	printf("\nValue pointed to by will: %d", *(int*)*will);

}
// *(int*)will first will is typecasted into an integer type pointer (int*)will
// It is then dereferenced *(int*)will so we get the value pointed to by will

// (int*)will only type casts it and gives us the value inside will which is address
// To dereference and get the value pointed to we use *(int*)will

// (int)*sx first dereferences the void pointer sx
// trying to retrieve the value stored at the memory location pointed to by sx
// (int)*sx then typecasts this retrieved value to an int

