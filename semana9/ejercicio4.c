#include <stdio.h>
float x, x2;

float cuadrado();
int main()
{
cuadrado();
printf("%f\n", x2);
}
float cuadrado()
{
printf("Introduce el número del que quieras calculcar su cuadrado:");
scanf("%f", &x);
x2=x*x;
printf("El cuadrado de %f es ", x);
return x2;
}
