#include <stdio.h>

void cuadrado(float x);
int main()
{
	float x;

	printf("Introduce un número para elevar al cuadrado:");
	scanf("%f", &x);
	cuadrado(x);
return 0;
}
void cuadrado(float x)
{
	float x2;
	x2=x*x;
	printf("El cuadrado de %f es %f\n", x, x2);
}
