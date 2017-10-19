#include <stdio.h>
#include <math.h>

double div1(double a, double b);
double div2(double a, double b, double c);
double square(double n);
double delta(double a, double b, double c);

double main() {

	double a, b, c;

	printf("Digite os coeficientes a b e c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("%.2lfx² + %.2lfx + %.2lf \n", a, b, c);

	if (delta(a,b,c)<0) {

		printf("%.2lf + %.2lfi; %.2lf - %.2lfi\n", div1(a,b), div2(a,b,c), div1(a,b), div2(a,b,c));

	}	
	else {

		printf("%.2lf %.2lf\n", div1(a,b) + div2(a,b,c), div1(a,b) - div2(a,b,c));

	}
}

double div1(double a, double b) { 

	return -b/2.0*a;
}

double div2(double a, double b, double c) { 

	return square(delta(a,b,c))/(2.0*a);
}

double delta(double a, double b, double c) { 

	return pow(b,2)-4*a*c;
}

double square(double n) {

	if (n<0) return sqrt(-n);
	return sqrt(n);
}







