#include <stdio.h>

int paridade(int n);

int main() {

	int n;

	printf("Digite um número inteiro: ");
	scanf("%d", &n);

	printf("%d \n", paridade(n));

}

int paridade(int n) {

	if(n%2==0) return 0;
	return 1;

}
