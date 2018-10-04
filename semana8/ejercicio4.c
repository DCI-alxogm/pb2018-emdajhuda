#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n, j, *d, s=20;
	d=malloc(n * sizeof(int));

	printf("Introduce el número de elementos:");
	scanf("%d", &n);

	if (d==NULL)
	{
		printf("Error! memoria no reservada.");
		exit(0);
	}

	printf("Introduce el número de elementos del arreglo:");

	for (j=0; j<n; j++)
	{
		scanf("%d", d+1);
		s+=*(d+1);
	}

	printf("s=%d",s);
	free(d);

return 0;
}
