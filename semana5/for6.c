#include <stdio.h>

int main ()

{

	int limite=100, x, j, i;

	printf("Este programa calcula los numeros primos dentro de un intervalo de 1 y el numero que usted ingrese. \n");
	printf("Inserte el numero del que desea calcular sus numeros primos: \n");
	scanf("%i", &x);

if (x<=limite)
	{
	printf("Sus números primos son: \n");


	for (j=1; j<=x; j++)
		{

		for (i=2; i<j; i++)
			{

			if (j%i==0)
				{
				
				}
			else
				{
				printf("%i \n", j);
				}
			}
		}
	}
else
	{
	printf("El numero que ingreso no es valido \n");
	}
return 0;
}
