#include <stdio.h>

int main()
{
	float x, x2;

	printf("Introduce un número para elevar al cuadrado:");
	scanf("%f", &x);
	cuadrado(x,x2);
return 0;
}
void cuadrado(float x, float x2);
{
	x2=x*x;
	printf("El cuadrado de %f es %f\n", x, x2);
}
