#include <stdio.h>

int fatorial(int n) {

	if(n<2) return 1;
	return (n*fatorial(n-1));
}

float binominal(int n, int k) {

	return fatorial(n)/(fatorial(k)*fatorial(n-k));

}

int main(void) {

	int n, k;

	printf("Digite o n e o k: ");
	scanf("%d %d", &n, &k);

	if (k>n) return printf("erro\n"); 

	printf("O coef. binominal é: %.0f\n", binominal(n, k));
}
