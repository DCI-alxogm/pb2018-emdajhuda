#include <stdio.h>
#include <math.h>
void ejercicio1(int x1, int x2)
{
int i, j, r;
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
}
