#include <stdio.h>

typedef struct ficha{
	char nome[100];
	int ra;
	float p1;
	float p2;
	float p3;
	float media;
}ficha;

void fmedia(FILE *fp)
{
	FILE *f;
	ficha a[50];

	for(int i=0; i<50; i++) {
	fscanf(fp, "%s %d %f %f %f", a[i].nome, &a[i].ra, &a[i].p1, &a[i].p2, &a[i].p3);
	}

	for(int i=0; i<50; i++) {
	a[i].media = (a[i].p1+a[i].p2+a[i].p3)/3;
	}

	f = fopen("media_alunos.txt", "w");

	for(int i=0; i<50; i++) {
	fprintf(f, "%s %d %.2f %.2f %.2f %.2f\n", a[i].nome, a[i].ra, a[i].p1, a[i].p2, a[i].p3, a[i].media);
	}
}
	

int main()
{ 
	FILE *fp;

	fp = fopen("lista_alunos.txt", "r");

	fmedia(fp);
}

	


