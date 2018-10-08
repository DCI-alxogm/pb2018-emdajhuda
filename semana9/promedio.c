#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	float *d, s=0.0, p;
	FILE* data;
	
	printf("Introduce el número de elementos: ");
	scanf("%d", &n);

	d = (float*) calloc(n, sizeof(int));
	if (d == NULL)
	{
		printf("Error! memoria no reservada");
		exit(0);
	}

	data = fopen("promedio.txt","r");

	for(i=0; i<n; i++)
	{
		fscanf(data, "%f", (d + i));
		s += *(d + i);
	}

	fclose(data);

	p=s/n;
	printf("Promedio = %f\n", p);

free(d);

return 0;
}
