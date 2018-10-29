#include <stdio.h>
#include <stdlib.h>

float calculo(float **T[][], int c, int cw, float **Tv[][], int n)
{

	N=n*n;

	int i, j, c;
	float ei[N], em;
	FILE* out;

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

	if(cw%5==0)

	for (j=1; j<(n+1); j++)
		{
		for (i=1; i<(n+1); i++)
			{
		fprintf(out, "%f ", T[i][j]);
			}
		fprintf(out, "\n");
		}
	fclose(out);
return em;
}
