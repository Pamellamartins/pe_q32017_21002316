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
	tempo dif;
 
	scanf("%dm %ds %d", &A.min, &A.seg, &A.dec);
	scanf("%dm %ds %d", &B.min, &B.seg, &B.dec);

	t = diferenca(A, B);
	
	dif.min = t/6000;
	dif.seg = (t%6000)/100;
	dif.dec = (t%6000)%100;
	
	printf("%dm %ds %d\n", dif.min, dif.seg, dif.dec );
}
