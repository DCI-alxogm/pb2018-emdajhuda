#include <stdio.h>
#include <stdlib.h>

void primos(int n1, int n2);

int main(int arg, char *argt[])
{

	int n1, n2;

	printf("El programa que estas ejecutando es: %s\n", argt[0]);

	if(arg==3)
	{

		n1=atoi(argt[1]);
		n2=atoi(argt[2]);

		primos(n1, n2);
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
