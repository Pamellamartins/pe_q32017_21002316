#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct pontos {
	float x;
	float y;
	float z;
} pontos;

float dist( pontos p1, pontos p2)
{
	return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2)+pow(p2.z-p1.z,2));
}

int main() 
{
	pontos p1;
	pontos p2;

	scanf("%f %f %f", &p1.x, &p1.y, &p1.z);
	scanf("%f %f %f", &p2.x, &p2.y, &p2.z);

	printf("%.2f\n", dist(p1, p2));
}
