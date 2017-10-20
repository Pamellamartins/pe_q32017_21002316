#include <stdio.h>
#include <math.h>

float bin_p_dec(float valor, float parcial, float pot) {

	if (valor==0) return parcial;
	parcial += fmod(valor,10)*pow(2,pot);
	return bin_p_dec(floor(valor/10), parcial, pot+1);
	
}

float dec_p_bin(float valor, float parcial, float ind) {

	if(valor==0) return parcial;
	parcial+=fmod(valor,2)*pow(10,ind);
	return dec_p_bin(floor(valor/2), parcial, ind+1);	
 
}

float main() {

	float entrada, valor;

	printf("Digite o valor para conversão: \n");
	scanf("%f", &valor);
	printf("Digite a opcao de conversão: \n");
	scanf("%f", &entrada);

	if(entrada==1) printf("%.2f\n", dec_p_bin(valor, 0, 0));
		else printf("%.2f\n", bin_p_dec(valor, 0, 0));
}

