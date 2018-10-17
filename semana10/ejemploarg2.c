#include <stdio.h>

int main(int arg, char *argt[])
{

	printf("El programa que estas ejecutando es: %s.\n", argt[0]);

	int n;
	char *nombre_archivo;
	FILE *fp;
	if(arg==2)
	{
		nombre_archivo=argt[1];
		printf("El nombre del archivo es: %s \t %s.\n", argt[1], nombre_archivo);
		fp = fopen(nombre_archivo, "w");
		n=22;
		fprintf(fp, "%i", n);
		fclose(fp);
	}
	else if(arg>2)
	{
		printf("Mas argumentos de los necesarios.\n");
	}
	else
	{
		printf("Se requiere de al menos 1 argumento.\n");
	}

	return 0;
}
