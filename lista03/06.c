#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}

int main() 
{
	int tam;

	scanf("%d", &tam);

	int *vetor = malloc(sizeof(int)*tam);

	for (int ind=0; ind<tam; ind++) {
		scanf("%d", &v[ind]);
	}
	qsort( vetor, tam, sizeof(int), cmpfunc);
}
