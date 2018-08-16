/*Programa creado el 15 de agosto del 2018*/
int main()
#include <stdio.h>
{
	float a, b, c, d, e1, e2, e3, e4;
	printf("En este programa podras hacer los claculos siguientes: \n");
	printf("1.- e=(a+b)*c/d \n");
	printf("2.- e=((a+b)*c)/d \n");
	printf("3.- e=(a+b)*c/d \n");
	printf("4.- e=a+(b*c)/d \n");
	printf("Introduce los valores de las variables: \n");
	printf("a: \n");
	scanf("%i", &a);
	printf("b: \n");
	scanf("%i", &b);
	printf("c: \n");
	scanf("%i", &c);
	printf("d: \n");
	scanf("%i", &d);
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*c/d;
	e4=a+(b*c)/d;
	printf("Para la 1 \n");
	printf(":e=%i \n", e1);
	printf("Para la 2 \n");
	printf(":e=%i \n", e2);
	printf("Para la 3 \n");
	printf(":e=%i \n", e3);
	printf("Para la 4 \n");
	printf(":e=%i \n", e4);
}
// Me falto agregar los calculos
