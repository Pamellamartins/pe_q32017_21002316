#include <stdio.h>

int pot(int x, int y, int parcial) {
	
	if (y==0) return parcial;
	parcial = parcial*x;
	return pot(x, y-1, parcial);

}

int main() {

	int x, y;

	printf("Digite o x e o y para x^y: ");
	scanf("%d %d", &x, &y);

	printf("O resultado é: %d\n", pot(x,y,1));

}

	

