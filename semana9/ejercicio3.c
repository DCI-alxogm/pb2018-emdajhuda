#include <stdio.h>

void cuadrado(float x);

int main()
{
float x, x2;
printf("Introduce el número del que quieras calculcar su cuadrado:");
scanf("%f", &x);
cuadrado(x);
return 0;
}
void cuadrado(float x)
{
float x2;
x2=x*x;
printf("EL cuadrado de %f es %f\n", x, x2);
}



