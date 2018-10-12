#include <stdio.h>
#include <math.h>

void par(int x1);
void ep();
float costan();
float logaritmo(float s);

	float x3;

int main()
{
	int p, x1;
	float x4;

	printf("Selecciona la operación que quieras realizar:\n");
	printf("1) Identificar si un número es par \n");
	printf("2) exp(x) \n");
	printf("3) Cos(x)+Tan(x/2) \n");
	printf("4) ln(x)+3x^2 \n");
	scanf("%i", &p);

	switch(p)
	{
		case 1:
		{
			printf("Introduce un número que deseas saber si es par:");
			scanf("%i", &x1);
			par(x1);
		}
		break;
		case 2:
		{
			ep();
		}
		break;
		case 3:
		{
			costan();
			printf("El resultado de la operación es:\t%f\n", x3);
		}
		break;
		case 4:
		{

			printf("Ingrese el número para ejecutar la operación:");
			scanf("%f", &x4);

			x4=logaritmo(x4);

			printf("El resultado de la operación fue:\t%f\n", x4);
		}
		break;
		default:
		{
			printf("Error! Selección invalida.");
		}
	}
	return 0;
}

void par(int x1)
{
 	if (x1%2==0)
	{
		printf("El número %i es par.\n", x1);
	}
	else
	{
		printf("El número %i es impar.\n", x1);
	}
}

void ep()
{
	float x2;

	printf("Ingrese el número para ejecutar la operación:");
	scanf("%f", &x2);
	
	x2=exp(x2);

	printf("El resultado de la operación fue:\t%f\n", x2);
}

float costan()
{
	printf("Ingrese el número para ejecutar la operación:");
	scanf("%f", &x3);
	
	x3=x3*3.1415926/180;
	x3=cos(x3)+tan(x3/2);

return x3;
}

float logaritmo(float s)
{
return log(s)+(3*(pow(s,2)));
}

