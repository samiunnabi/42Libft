
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *brat = NULL;
	int **rat = &brat;

	brat = (int *)malloc(sizeof(int));
	**rat = 69;

	printf("%d", *(int*)brat);
	printf("\n%d", **rat);
	printf("\n%p", &brat);
	printf("\n%p", rat);
}
// *brat is a null pointer as in it doesnt have any valid memory address
// Assigning the value of rat which points to mem address of brat as 69 returns undefined behaviour
// Cuz assigning a value to memory address that doesnt exist which leads to undefined behaviour
// Before assigning value to pointer the pointer needs to point to a valid mem address
// This is done by usin malloc to allocate memory address nd then then value can be assigned to brat
