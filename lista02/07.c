#include <stdio.h> 
#include <math.h>

float celcius_p_fah(float valor);
float celcius_p_kelvin(float valor);
float fah_p_celcius(float valor);
float fah_p_kelvin(float valor);
float kelvin_p_celcius(float valor);
float kelvin_p_fah(float valor);
float bin_p_dec(float valor);
float dec_p_bin(float valor);

float main() {

	float tipo, entrada, saida, valor=30.02;

	printf("Digite o tipo de conversão: 1 para temperatura e 2 para base\n");
	scanf("%f", &tipo);

	if (tipo==1) {
		printf("Digite a escala atual: \n");
		scanf("%f", &entrada);
		printf("Digite a escala para conversão: \n");
		scanf("%f", &saida);
		printf("Digite o valor para conversão: \n");
		scanf("%f", &valor);

		if(entrada==1 && saida==2) printf("%.2f F\n", celcius_p_fah(valor));
		else if(entrada==1) printf("%.2f K\n", celcius_p_kelvin(valor));
			else if (entrada==2 && saida==1) printf("%.2f C\n", fah_p_celcius(valor));
				else if (entrada==2) printf("%.2f K\n", fah_p_kelvin(valor));
					else if(entrada==3 && saida==1) printf("%.2f C\n", kelvin_p_celcius(valor));	
						else printf("%.2f F\n", kelvin_p_fah(valor));
	}
	else {
		printf("Digite a base atual: \n");
		scanf("%f", &entrada);
		printf("Digite a base para conversão: \n");
		scanf("%f", &saida);
		printf("Digite o valor para conversão: \n");
		scanf("%f", &valor);

		if(entrada==1) printf("%.2f\n", dec_p_bin(valor));
		else printf("%.2f\n", bin_p_dec(valor));
	}		
}

float celcius_p_fah(float valor) {
		return valor*1.8 +32;
}

float celcius_p_kelvin(float valor) {
		return valor+273.15;
}

float fah_p_celcius(float valor) {
		return (valor-32)/1.8;
}

float fah_p_kelvin(float valor) {
		return fah_p_celcius(valor)+273.15;
}

float kelvin_p_celcius(float valor) {
		return valor-273.15;
}

float kelvin_p_fah(float valor) {
		return celcius_p_fah(kelvin_p_celcius(valor));
}

float dec_p_bin(float valor) {

	
		
 
}

float bin_p_dec(float valor) {

	float total=0, pot=0, origin=valor;
	
	valor = fmod(origin,1);

	while(fmod(valor,1)>0) {
		total += trunc(valor)*pow(2,pot);
		valor = fmod(valor*10,10);
		pot--;
		if (floor(valor)>1) break;
	}
	
	valor= floor(origin);
	pot=0;

	while (valor>0) {
		total+=fmod(valor,10)*pow(2,pot);
		valor=floor(valor/10);
		pot++;
	}
	return total;
}
