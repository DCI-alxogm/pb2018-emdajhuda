
#include <stdio.h>
float cuadrado(float s);
int main()
{
float x, x2;

	printf("Introduce un número para elevar al cuadrado:");
	scanf("%f", &x);
	x2=cuadrado(x);
	printf("El cuadrado de %f es %f\n", x, x2);
return 0;
}
float cuadrado(float s)
{
return s*s;
}
