#include <stdio.h>
#include <stdlib.h>

int main ()
{

	int *d, j, n1, n2;
	printf("Introduce el número de elementos de n1:");
	scanf("%d", &n1);
	printf("\nIntroduce el nuevo número de elementos n2:");
	scanf("%d", &n2);

	d=malloc(n1*sizeof(int));

	printf("Dirección de la memoria reservada: ");

	for (j=0; j<n1; j++);
	{
		printf("%x \t", d + j);
	}
	d=realloc(d,n2);

	for (j=0; j<n2; j++);
	{
		printf("%u\t", d + j);
	}
	free(d);
	return 0;
}
