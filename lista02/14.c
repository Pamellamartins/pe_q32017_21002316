#include <stdio.h>

int palindromo(int num, int parcial);

int main() {
	
	int num;

	printf("Digite um número: ");
	scanf("%d", &num);

	if(palindromo(num, 0)==num) printf("sim\n");
	else printf("não\n");
}

int palindromo(int num, int parcial) {

	if(num==0) return parcial;
	parcial = parcial*10 + num%10;
	return palindromo(num/10, parcial);
}

	

	
