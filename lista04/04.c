#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	if (x==0) return 1;

	(double)x;
	
	while(x%2==0) {
		x = x/2;
	}
	
	if(x==1) return 1;
	return 0;
}

ulint f2(ulint x)
{
	if (x==0) return 1;
	if (x&& !(x& (x-1))) return 1;
	return 0;
}

int main() 
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;

	tempo_init = clock();
	for (int i=0; i<BIGNUM; i++) {
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

	
