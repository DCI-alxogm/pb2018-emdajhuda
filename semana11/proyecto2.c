#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argt[])
{

	char *datos;
	char *resultados;
	int N, n, i, j;

	float *T[i][j], l1, l2, l3, l4;

	FILE* data;
	FILE* out;

	printf("El programa que estas ejecutando es: %s\n", argt[0]);

	if(arg==3)
	{

	datos=argt[1];
	resultados=argt[2];
	data = fopen(datos, "r");

	fscanf(data, "%f%f%f%f%f", &l1, &l2, &l3, &l4, &n);

	fclose(data);
	N=n*n;

	T[][]=(float*) calloc(N, sizeof(int));

	for (i=0; i<n; i++)
		{
		for (j=0; j<n; j++)
			{
			*T[i][j]=0;
			}
		}

	for (i=0; i<n; i++)
		{
		for (j=0; j<n; j++)
			{
			if(i==0)
				{
				if(j==0)
					{
					*T[i][j]=(l1+l3)/4;
					}
				else if(j==n)
					{
					*T[i][j]=(l1+l4)/4;
					}
				else
					{
					*T[i][j]=(l1)/4;
					}
				}
			if(i==n)
				{
				if(j==0)
					{
					*T[i][j]=(l2+l3)/4;
					}
				else if(j==n)
					{
					*T[i][j]=(l2+l4)/4;
					}
				else
					{
					*T[i][j]=(l2)/4;
					}
				}
			}
		}
	for (i=0; i<n; i++)
		{

		out = fopen(resultados, "w");
		for (j=0; j<n; j++)
			{
		fprintf(out, "%f", *T[i][j]);

		fclose(out);
			}
		}

	free(T[][]);
	}
	else if(arg>3)
	{
		printf("Mas argumentos de los necesarios.\n");
	}
	else
	{
		printf("Se requiere de al menos 3 argumentos.\n");
	}

return 0;
}
