#include <stdio.h>

typedef struct tempo {
	int min;
	int seg;
	int dec;
} tempo;

int diferenca( tempo A, tempo B)
{
	int t1, t2;

	t1 = A.min*6000 + A.seg*100 + A.dec;
	t2 = B.min*6000 + B.seg*100 + B.dec;

	return t1-t2;
}

int main()
{
	tempo A, B;
	int t, minuto, segundo, decimo;
 
	scanf("%d %d %d", &A.min, &A.seg, &A.dec);
	scanf("%d %d %d", &B.min, &B.seg, &B.dec);

	t = diferenca(A, B);
	
	minuto = t/600;

	printf("%d\n", t);
}
