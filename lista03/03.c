#include <stdio.h>
#include <stdlib.h> 

int *soma (int *v1, int *v2)
{
	int *v3 = malloc(sizeof(int)*5);

	for(int ind=0; ind<5; ind++) {
		v3[ind] = v1[ind] + v2[ind];
	}
	
	return v3;
}

int main() 
{
	int v1[5], v2[5], ind=0, *v3;


	for(ind=0; ind<5; ind++) {
		
		scanf("%d", (v2+ind));
		
	}

	
	for(ind=0; ind<5; ind++) {

		scanf("%d", &v1[ind]);
	}

	v3 = soma(v1, v2);

	for (int i =0; i<5; i++) {
		printf("%d ", v3[i]);
	} 
}
