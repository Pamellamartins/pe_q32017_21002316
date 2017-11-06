#include <stdio.h>

int cont_vogais(char *string)
{
	int ind=0, acum=0;
	
	while (string[ind] != '\0') {
		if (string[ind] == 'a' || string[ind] == 'e' || string[ind] == 'i' || string[ind] == 'o' || string[ind] == 'u') {
			acum++;
		}
		ind++;
	}

	return acum;
}
char main () 
{
	char string[100];

	
	scanf("%s", string);

	printf("%d\n", cont_vogais(string));
}
