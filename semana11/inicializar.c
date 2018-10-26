#include <stdio.h>
#include <stdlib.h>

void inicializar(float l1, float l2, float l3, float l4, int n)

{
	int i, j;
	float T[n+2][n+2];

	FILE* out;	

	for (i=0; i<(n+2); i++)
		{
		for (j=0; j<(n+2); j++)
			{
			T[i][j]=0;
			}
		}

	for (j=1; j<(n+1); j++)
		{
		T[0][j]=l1;
		}
	for (j=1; j<(n+1); j++)
		{
		T[(n+1)][j]=l2;
		}

	for (i=1; i<(n+1); i++)
		{
		T[i][0]=l4;
		}
	for (i=1; i<(n+1); i++)
		{
		T[i][(n+1)]=l3;
		}

	out = fopen("resultados.txt", "w");

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
