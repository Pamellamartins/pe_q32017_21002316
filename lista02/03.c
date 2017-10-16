#include <stdio.h>
#include "math.h"

float pi(float a, float b, float t, float p);

int main() {
 
	printf("O valor de pi é: %.20f\n", pi(1.0, 1.0/sqrt(2.0), 1.0/4.0, 1.0));
	
}
	
float pi(float a, float b, float t, float p) {

	float a1=1.0;

	for(int cont=0; cont<10; cont++) {

		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*(pow((a-a1),2.0));
		p = 2.0*p;
		a = a1;
	}

	return pow(a+b,2)/(4*t);

}
