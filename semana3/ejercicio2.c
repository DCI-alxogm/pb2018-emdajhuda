/* Este programa calcula una serie de operaciones, fue creado el 20 de agosto del 2018 por Judá Rodríguez(emdajhuda)*/
#include <stdio.h>
#include <math.h>
int main()

{
	float x1, x2, y1, y2, y3;
	printf("En este programa realiza las siguientes operaciones: \n");
	printf("y=exp(x) \n");
	printf("y=Cos(x)+Tan(x/2) \n");
	printf("y=ln(x)+3x^2 \n");
	scanf("%f \n", &x1);
	y1=exp(x1);
	x2=x1*3.1415926/180;
	y2=cos(x2)+tan(x2/2);
	y3=log(x1)+(3*(x1*x1));
	printf("Los resultados de las operaciones son \n");
	printf("1.- y=%f \n", y1);
	printf("2.- y=%f \n", y2);
	printf("3.- y=%f \n", y3);
	printf("%f \n", x2);
}

