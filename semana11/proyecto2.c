#include <stdio.h>
#include <stdlib.h>

void inicializar(float l1, float l2, float l3, float l4, int n);
float calculo(float T[i][j], float T[i-1], float T[i+1], float T[i][j+1], float T[i][j-1], int cw, float Tv[i][j]);

int main(int arg, char *argt[])
{

	char *datos;
	int N, n, i, j, c, cw=0;

	float l1, l2, l3, l4, em=1, e=0.001;

	FILE* data;
	FILE* out;

	printf("El programa que estas ejecutando es: %s\n", argt[0]);

	datos=argt[1];

	data = fopen(datos, "r");

	fscanf(data, "%f %f %f %f %i", &l1, &l2, &l3, &l4, &n);

	fclose(data);

	N=n*n;

	float T[n+2][n+2], Tv[n+2][n+2], ei[N];


	if(arg==2)
	{

	inicializar(l1, l2, l3, l4, n);

	out = fopen("resultados.txt", "r");

	for (j=0; j<(n+2); j++)
		{
		for (i=0; i<(n+2); i++)
			{
			fscanf(out, "%f", &T[i][j]);
			}
		}

	fclose(out);

	while (cw<1000 && em>e)
	{
	c=0;
	for (j=1; j<(n+1); j++)
		{
		for (i=1; i<(n+1); i++)
			{
			T[i][j]=(T[i-1][j]+T[i+1][j]+T[i][j+1]+T[i][j-1])/4;
			ei[c]=((T[i][j]-Tv[i][j])/T[i][j]);
			c++;
			Tv[i][j]=T[i][j];
			}
		}
	for(c=0; c<N; c++)
		{
			if (em < ei[c])
			{
				em = ei[c];
			}
		}
		

	out = fopen("resultados.txt", "w");

	for (j=1; j<(n+1); j++)
		{
		for (i=1; i<(n+1); i++)
			{
		fprintf(out, "%f ", T[i][j]);
			}
		fprintf(out, "\n");
		}
	fclose(out);
	cw++;
	}

	}
	else if(arg>2)
	{
		printf("Mas argumentos de los necesarios.\n");
	}
	else
	{
		printf("Se requiere de al menos 2 argumentos.\n");
	}

return 0;
}
