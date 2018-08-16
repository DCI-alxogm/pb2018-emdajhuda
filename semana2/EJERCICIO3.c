/*Programa creado el 15 de agosto del 2018*/
#include <stdio.h>

int main()

{
	float a, b, c, d, e1, e2, e3 ,e4;
	printf("En este programa podras hacer los claculos siguientes: \n");
	printf("1.- e=(a+b)*c/d \n");
	printf("2.- e=((a+b)*c)/d \n");
	printf("3.- e=(a+b)*c/d \n");
	printf("4.- e=a+(b*c)/d \n");
	printf("Introduce los valores de las variables (Pueden ser decimales): \n");
	printf("a: \n");
	scanf("%f", &a);
	printf("b: \n");
	scanf("%f", &b);
	printf("c: \n");
	scanf("%f", &c);
	printf("d: \n");
	scanf("%f", &d);
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*c/d;
	e4=a+(b*c)/d;
	printf("Para la 1 \n");
	printf("1.- e=%f \n", e1);
	printf("Para la 2 \n");
	printf("2.- e=%f \n", e2);
	printf("Para la 3 \n");
	printf("3.- e=%f \n", e3);
	printf("Para la 4 \n");
	printf("4.- e=%f \n", e4);
}
/*Acabe el programa el 16 de Agosto del 2018
Tuve problemas para definir variables, decidi hacer cuatro variables de e y asi poder tener diferentes resultados a la vez*/
