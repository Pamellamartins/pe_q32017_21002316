#include <stdio.h>
#include <stdlib.h>

int v[5] = {0};

void* imprime_vetor(int *v) 
{
	int ind=0;

	while (*(v+ind) != 0) {

		printf("%d\n", *(v+ind));
		ind++;

	}
}

int main() 
{
	int v[5] = {1,2,3,4};

	imprime_vetor(v);
}
