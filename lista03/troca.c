#include <stdio.h>
#include <stdlib.h>

void* troca (int *v1, int *v2)
{
	int temp;
	temp = *v1;
	*v1 = *v2;
	*v2 = temp;

	printf("%d\n", *v1);
}

int main() 
{
	int *v1 = malloc (sizeof(int)*1), *v2 = malloc(sizeof(int)*1);

	v1[0] = 1;
	v2[0] = 2;

	troca(v1, v2);
}

	
