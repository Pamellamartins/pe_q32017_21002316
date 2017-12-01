#include <stdio.h>

#define N 100

typedef struct pilha {
	int dados[N];
	int topo;
} pilha;

int insere_pilha(pilha *p, int x)
{
	if (p->topo + 1 < N) {
		++(p->topo);
		p->dados[p->topo] = x;
		return 1;
	}
	return -1;
}

int remove_pilha(pilha *p)
{
	--(p->topo);
	return p->dados[p->topo+1];
}

int main(void)
{

	pilha p[N];
	pilha bin;
	int x = 22;
	bin.topo = -1;

	while (x) {
		if (insere_pilha(p, x%2) == -1) {
			printf("Espaço insuficiente na pilha\n");
			return -1;
		}
	x = x/2;
	}

	while (p->topo>0) {
		printf("%d", remove_pilha(p));
	}
	printf ("\n");
}		



