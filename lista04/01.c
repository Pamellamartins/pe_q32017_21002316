#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct pontos {
	float x;
	float y;
	float z;
} pontos;

float dist( float x1, float y1, float z1, float x2, float y2, float z2)
{
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
}

int main() 
{
	pontos p1[3];
	pontos p2[3];

	scanf("%f %f %f", &p1[0].x, &p1[1].y, &p1[2].z);
	scanf("%f %f %f", &p2[0].x, &p2[1].y, &p2[2].z);

	printf("%.2f\n", dist(p1[0].x, p1[1].y, p1[2].z, p2[0].x, p2[1].y, p2[2].z));
}
