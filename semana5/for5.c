#include <stdio.h>

int main ()

{

	int j, f, r=1;

	printf("Este programa puese calcular el numero factorial de cualquier numero entero. \n");
	printf("Ingresa el numero que deseas calcular: \n");
	scanf("%i", &f);
	
for (j=1; j<=f; j++)
{
	r=r*j;
}

	printf("El resultado de %i! es:\t %i", f, r);
return 0;
}
