#include <stdio.h>

typedef struct fila {
	int pessoas[N];
	int frente;
	int fim;
	int elems;
} fila;

void cria_fila(fila *f)
{
	f->frente = f->fim = -1;
	f->elems = 0;
}

int insere_fila( fila *f, int t) 
{
	if (f->elems + 1 >N) return 0;
	
	if(f->elems == 0) f->frente = f->fim = 0;
	else f->fim = (f->fim + 1)%N;

	f->pessoas[f->fim] = t;
	++(f->elems);

	return 1;
}

int remove_fila(fila *f)
{
	int t;

	if(f->elems == 0) return -1;
	t = f->pessoas[f->frente];

	--(f->elems);

	if(f->elems == 0) f->frente = f->fim = -1;
	else f->frente = (f->frente+1)%N;

	return t;
}

int main()
{
	fila *f;
	int minuto, t;

	cria_fila(f);

	for (minuto=0; minuto<15;minuto++) {
		pessoa_chegando(f, minuto);
		t = pessoas_saindo(f, n_caixas);
		if(minuto-t>15) return 1;
	}
	return 0;
}


