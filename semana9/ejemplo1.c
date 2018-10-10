#include <stdio.h>
void cuadrado();
int main()
{
	cuadrado();
	return 0;
}
void cuadrado()
{
	float x, x2;
	printf("Introduce un número para elevar al cuadrado:");
	scanf("%f", &x);
	x2=x*x;
	printf("Elcuadrado el número %f es %f\n", x, x2);
}
