#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argt[])
{
	int i, j, k, n;
	float xi, xf, dx, yi, yf, dy, zi, zf, dz;
	char *resultados;

	FILE* out;

	printf("El programa que estas ejecutando es: %s\n", argt[0]);

	if (arg==9)
	{
		resultados=argt[1];
		xi=atof(argt[2]);
		yi=atof(argt[3]);
		zi=atof(argt[4]);
		xf=atof(argt[5]);
		yf=atof(argt[6]);
		zf=atof(argt[7]);
		n=atof(argt[8]);
	printf("Los resultados del programa estan en: %s \t %s\n", argt[1], resultados);

		dx=(xf-xi)/n;
		dy=(yf-yi)/n;
		dz=(zf-zi)/n;

		out = fopen(resultados, "w");
		fprintf(out, "x\t\ty\t\tz\n");
		fprintf(out, "%f\t%f\t%f\n", xi, yi, zi);

		for (i=1; i<=n; i++)
		{
		xi+=dx;
			for (j=1; j<=n; j++)
			{
			yi+=dy;
			
				for (k=1; k<=n; k++)
				{
				zi+=dz;
				
					fprintf(out, "%f\t%f\t%f\n", xi, yi, zi);
				
				}
			zi=atof(argt[4]);
			}
		yi=atof(argt[3]);
		}
		fclose(out);
	}
	else if(arg>9)
	{
		printf("Mas argumentos de los necesarios.\n");
	}
	else
	{
		printf("Se requiere de al menos 9 argumentos.\n");
	}

return 0;
}
