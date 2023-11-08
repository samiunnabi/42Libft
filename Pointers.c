
 #include <stdio.h>

int main()
{
	int i;
	int *sami; //pointer sami stores memory address of i as in it points to i //so when u do %d *sami it goes into mem address pointed to by i and gets the value from there
	int **usef;
	int ***azooz;

	i = 69;
	sami = &i;
	usef = &sami;
	azooz = &usef;

	printf("Value of i: %d Mem Address of i; %p", i, &i);
	printf("\nValue of sami: %d Mem Address of sami; %p Actual mem add; %p", *sami, sami, &sami);
	printf("\nValue of usef: %d Mem Address of usef; %p Actual mem add; %p Deref by 1: %p, Defref by 2: %d", **usef, usef, &usef, *usef, **usef);
	printf("\nValue of azooz: %d Mem Address of azooz; %p Actual mem add; %p Deref by 1: %p, Defref by 2: %p", ***azooz, azooz, &azooz, *azooz, **azooz);
}

// Deref here stands for dereference indirection
// There are different levels of indirection which can be used to access different levels of pointers
// *azooz here tells u to go 1 level up into usef and go to usefs mem address and get the value (dereference) which is mem adress of sami
// **azooz tells u to go 2 levels up into sami and get value of sami which is mem address of i
// *usef tells u to go 1 level up into sami and get mem address of i

// when using & operation (eg: &a) to get address u always have to use %p format specifier
