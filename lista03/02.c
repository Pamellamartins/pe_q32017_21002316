#include <stdio.h>
#include <stdlib.h>

int tamanho (char *string)
{
	int acum=0, ind=0;

	while (string[ind] != '\0') {
		acum++;
		ind++;
	}
	return acum-1;
}

char *invertida (char *string)
{
	int tam = tamanho(string), ind = tamanho(string);
	char *invertida = malloc(sizeof (char)*265);

	for (int cont = 0; cont<=tam; cont++) {
		invertida[cont] = string[ind];
		ind--;
	}
	return invertida;
}

char main () 
{
	char string[265];
	

	scanf("%s", string);

	printf("%s\n", invertida(string));
}
