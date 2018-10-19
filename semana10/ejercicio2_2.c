#include <stdio.h>

void primos(int n1, int n2)

{

	int j, i, r;

if (n2-n1<=100)
	{
	printf("Sus números primos son: \n");


	for (j=n1; j<=n2; j++)
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
	printf("Los números que ingreso no son validos. \n");
	}
}
