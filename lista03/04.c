#include <stdio.h>

	

int main()
{
	int m[3][3];
	int transp[3][3], l, c;

	for(int l=0; l<3; l++) {
		for(int c=0; c<3; c++) {
			scanf("%d", &m[l][c]);
		}
	}

	for (l=0; l<3; l++) {
		for (c=0; c<3; c++) {
			transp[l][c] = m[c][l];
		}
	}

	for (l=0; l<3; l++) {
		for (c=0; c<3; c++) {
			printf("%d ", transp[l][c]);
		}
		printf("\n");
	}
	
}
