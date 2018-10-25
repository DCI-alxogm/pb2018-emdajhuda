#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argt[])
{

	char *resultados;
	int i, j;

	FILE* out;

	resultados=argt[1];

	float T[7][7];

	if(arg==2)
	{

	for (i=0; i<7; i++)
		{
		for (j=0; j<7; j++)
			{
			T[i][j]=0;
			}
		}
	
	for (j=1; j<6; j++)
		{
		T[0][j]=20;
		}
	for (j=1; j<6; j++)
		{
		T[6][j]=22;
		}

	for (i=1; i<6; i++)
		{
		T[i][0]=50;
		}
	for (i=1; i<6; i++)
		{
		T[i][6]=12;
		}



	out = fopen(resultados, "w");

	for (j=1; j<6; j++)
		{
		for (i=1; i<6; i++)
			{
		fprintf(out, "(%i,%i)%f\t", i, j, T[i][j]);
			}
		fprintf(out, "\n");
		}

	fclose(out);

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
