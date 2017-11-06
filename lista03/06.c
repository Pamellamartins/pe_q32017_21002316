#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}

int qsort( vetor, n, sizeof(int), cmpfunc)
{
}
int main() 
{
	int tam;

	scanf("%d", &tam);

	int *v = malloc(sizeof(int)*tam);

	for (int ind=0; ind<tam; ind++) {
		scanf("%d", &v[ind]);
	}
}
