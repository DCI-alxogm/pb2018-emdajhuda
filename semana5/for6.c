#include <stdio.h>

int main ()

{

	int x1, x2, j, i, r;

	printf("Este programa calcula los numeros primos dentro de un intervalo de maximo 100 números que usted ingrese. \n");
	printf("Inserte el intervalo de números de los que desea cálcular los números primos: \n");
	scanf("%i", &x1);
	scanf("%i", &x2);

if (x2-x1<=100)
	{
	printf("Sus números primos son: \n");


	for (j=x1; j<=x2; j++)
		{

		for (i=2; i<j; i++)
			{
			r=0;

			for(i=1;i<=j;i++)
				{
				if(j%i==0)
					{
					r++;
					}
				}
			if(r==2)
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
