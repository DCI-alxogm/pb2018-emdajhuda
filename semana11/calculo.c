#include <stdio.h>
#include <stdlib.h>

float calculo(float T[i][j], float T[i-1], float T[i+1], float T[i][j+1], float T[i][j-1], int cw, float Tv[i][j])
{

	int i, j, c;
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
}
