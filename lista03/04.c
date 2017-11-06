#include <stdio.h>
#include <stdlib.h>

int** transp1( int *m[3]) 
{
	int **transp= malloc(sizeof(int**)*3);
	int l, c;

	for(int cont=0; cont<3; cont++) {
		transp[cont]= malloc(sizeof(int*)*3);
	}

	for (int l=0; l<3; l++) {
		for (int c=0; c<3; c++) {
			transp[l][c] = m[c][l];
		}
	}
	return transp;
}

int main()
{
	int **m = malloc(sizeof(int**)*3);

	for(int c=0; c<3; c++) {
		m[c] = malloc(sizeof(int*)*3);
	}

	int **transp;

	for(int l=0; l<3; l++) {
		for(int c=0; c<3; c++) {
			scanf("%d", &m[l][c]);
		}
	}

	transp = transp1(m);

	for (int l=0; l<3; l++) {
		for (int c=0; c<3; c++) {
			printf("%d ", transp[l][c]);
		}
		printf("\n");
	}
	
}
