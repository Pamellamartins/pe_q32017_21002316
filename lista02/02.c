#include <stdio.h>

float volume(float larg, float alt, float comp);

int main() {

	float larg, alt, comp;

	printf("Digite a largura, altura e comprimento do objeto: ");
	scanf("%f %f %f", &larg, &alt, &comp);

	printf("%.2f\n", volume(larg, alt, comp));

}

float volume(float larg, float alt, float comp) {

	return larg*alt*comp;

}
