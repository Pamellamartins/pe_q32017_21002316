#include <stdio.h>

int mdc(int x, int y) {

	if (y==0) return x;
	return mdc(y, x%y);
}

int main() {

	int x, y;

	printf("Digite o x e o y: ");
	scanf("%d %d", &x, &y);

	printf("O MDC deles é: %d\n", mdc(x,y));
}
