#include <stdio.h>

float binominal(int n, int k);
int fatorial(int num);

float main() {

	int n, k;

	printf("Digite o n e o k: ");
	scanf("%d %d", &n, &k);

	if (k>n) return printf("erro\n"); 

	printf("O coef. binominal é: %.1f\n", binominal(n, k));

}

float binominal(int n, int k) {

	return fatorial(n)/(fatorial(k)*fatorial(n-k));

}

int fatorial(int num) {

	int mult=1;

	for(int c=1; c<=num; c++) {

		mult*=c;

	}

	return mult;

}


