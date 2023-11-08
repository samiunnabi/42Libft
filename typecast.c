
#include <stdio.h>

int main()
{
	int fida = 420;
	void *adil = &fida;
	printf("%d", *(int*)adil);
}
