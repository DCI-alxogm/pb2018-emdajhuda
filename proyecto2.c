#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argt[])
{

	char *datos;
	char *resultados;
	int N, n, i, j, c, cw=0;

	float l[4], em=1, e=0.001;

	FILE* data;
	FILE* out;

	printf("El programa que estas ejecutando es: %s\n", argt[0]);

	datos=argt[1];
	resultados=argt[2];
	data = fopen(datos, "r");

	fscanf(data, "%f %f %f %f %i", &l[0], &l[1], &l[2], &l[3], &n);

	fclose(data);

	N=n*n;

	float T[n+2][n+2], Tv[n+2][n+2], ei[N];

	for (i=0; i<(n+2); i++)
		{
		for (j=0; j<(n+2); j++)
			{
			T[i][j]=0;
			Tv[i][j]=0;
			}
		}


	if(arg==3)
	{
	
	for (j=1; j<(n+1); j++)
		{
		T[0][j]=l[0];
		}
	for (j=1; j<(n+1); j++)
		{
		T[(n+1)][j]=l[1];
		}

	for (i=1; i<(n+1); i++)
		{
		T[i][0]=l[3];
		}
	for (i=1; i<(n+1); i++)
		{
		T[i][(n+1)]=l[2];
		}

	while (cw<100 && em>e)
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
	if (cw%5==0)	
	{

	out = fopen(resultados, "w");

	for (j=0; j<(n+2); j++)
		{
		for (i=0; i<(n+2); i++)
			{
		fprintf(out, "%f ", T[i][j]);
			}
		fprintf(out, "\n");
		}
	fclose(out);
	}
	cw++;
	}

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
