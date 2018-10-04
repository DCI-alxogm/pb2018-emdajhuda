#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, j, *d, s = 0;
	printf("Introduce el numero de elementos: ");
	scanf("%d", &n);
	d = (int*) calloc(n, sizeof(int));

	if(d == NULL)
	{
		printf("Error! memoria no reservada");
		exit(0);
	}

	printf("Introduce los elementos del arreglo: ");

	for(j = 0; j < n; ++j)
	{
		scanf("%d", d + j);
		s += *(d + j);
	}

	printf("s = %d", s);

	free(d);
return 0;
}
