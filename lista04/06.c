#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x, ulint y)
{
	if (x<y) return y;
	return x;
}

ulint f2(ulint x, ulint y)
{
	
}

int main() 
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;

	tempo_init = clock();
	for (int i=0; i<BIGNUM; i++) {
		soma += f1(i,5);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	for (int i=0; i<BIGNUM; i++) {
		soma += f2(i,5);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão bitwise: %lf\n", tempo_gasto);

}

	
