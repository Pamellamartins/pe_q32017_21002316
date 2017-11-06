#include <stdio.h>

int repetidos(int tam, int* v)
{
	int acum;

	for(int i=0; i<tam; i++) {
		acum = 1;
		for(int aux=tam; aux>i; aux--) {
			if(v[i]==v[aux]) acum+=1;
		}
		if(acum>1) printf ("%d-%d ", v[i], acum);
	}
}	

int main() 
{
	int tam;
	
	printf("tamanho do vetor: ");
	scanf("%d", &tam);

	int v[tam];

	for (int ind=0; ind<tam; ind++) {
		scanf("%d", &v[ind]);
	}
	repetidos(tam, v);
}
