#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argt[])
{

	char *datos;
	char *resultados;
	int N, n, i, j;

	float l[4];

	FILE* data;
	FILE* out;

	printf("El programa que estas ejecutando es: %s\n", argt[0]);

	datos=argt[1];
	resultados=argt[2];

	data = fopen(datos, "r");

	fscanf(data, "%f %f %f %f %i", &l[0], &l[1], &l[2], &l[3], &n);

	fclose(data);

	float T[n][n];

	N=n*n;
	n+=2;

	if(arg==3)
	{
	
	for (j=0; j<n; j++)
		{
		T[0][j]=l[0];
		}
	for (j=0; j<n; j++)
		{
		T[n][j]=l[1];
		}

	for (i=0; i<n; i++)
		{
		T[i][0]=l[3];
		}
	for (i=0; i<n; i++)
		{
		T[i][n]=l[2];
		}

	for (i=1; i<(n-1); i++)
		{
		for (j=1; j<(n-1); j++)
			{
			T[i][j]=0;
			}
		}


	out = fopen(resultados, "w");

	for (j=0; j<n; j++)
		{
		for (i=0; i<n; i++)
			{
		fprintf(out, "(%i,%i)%f\t", i, j, T[i][j]);
			}
		fprintf(out, "\n");
		}

	fclose(out);

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
