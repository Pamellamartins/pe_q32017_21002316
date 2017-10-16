#include <stdio.h>

float soma(float x, float y);
float sub(float x, float y);
float mult(float x, float y);
float div(float x, float y);
float pot(float x, float y);

int main() {
	
	int func;
	float x, y;

	printf("Escolha uma função: ");
	scanf("%d", &func);

	printf("Digite o x e o y: ");
	scanf("%f %f", &x, &y);

	if(func==1) printf("%.2f\n", soma(x,y));
	if(func==2) printf("%.2f\n", sub(x,y));
	if(func==3) printf("%.2f\n", mult(x,y));
	if(func==4) printf("%.2f\n", div(x,y));
	if(func==5) printf("%.2f\n", pot(x,y));
}

float soma(float x, float y) {

	return x+y;

}

float sub(float x, float y) {

	return x-y;

}

float mult(float x, float y) {

	return x*y;

}

float div(float x, float y) {

	return x/y;

}

float pot(float x, float y) {

	int mult=1;

	if(y==0) return 1;

	for(int cont=1; cont<=y; cont++) {

		mult*=x;
		
	}

	return mult;

}

