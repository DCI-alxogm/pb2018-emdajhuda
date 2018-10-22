#include <stdio.h>
#include <stdlib.h>



int main(int arg, char *argt[])
{

	char *data;
	char *resultados;
	int N, n;

	float *T[i][j], l1, l2, l3, l4;

	FILE* data;
	FILE* out;

	printf("El programa que estas ejecutando es: %s\n", argt[0]);

	if(arg==3)
	{

	data = fopen(data, "r");

	fscanf(data, "%f%f%f%f%f", &l1, &l2, &l3, &l4, &n);

	N=n*n;

	T[i][j]=(float*) calloc(N, sizeof(int));

	for (i=1; i<(n-1); i++)
		{
		for (j=1; j<(n-1); j++)
			{
			T[i][j]=0;
			}
		}
	for
	free(T[i][j]);
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
