#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	int sbits=0;

	while (x) {
		sbits += x%2;
		x = x/2;
	}

	return sbits;
}

ulint f2(ulint x)
{
	int sbits=0;

	while (x) {
		sbits += (x&1);
		x = x>>1;
	}
	
	return sbits;
		
}

int main() 
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;

	tempo_init = clock();
	for (int i=0; i<1BIGNUM; i++) {
		soma += f1(i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	for (int i=0; i<BIGNUM; i++) {
		soma += f2(i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão bitwise: %lf\n", tempo_gasto);

}

	
