#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i;
	float *d, m=0.0;
	FILE* data;
	
	printf("Introduce el número de elementos a evaluar: ");
	scanf("%d", &n);

	d=(float*) calloc(n, sizeof(int));
	if (d==NULL)
	{
		printf("Error! memoria no reservada");
		exit(0);
	}

	data = fopen("num_maximo.txt","r");

	for(i=0; i<n; i++)
	{
		fscanf(data, "%f", d+i);
		if (m < *(d + i))
		{
			m = *(d + i);
		}
	}

	fclose(data);

	printf("El número maximo es = %f\n", m);
free(d);
return 0;
}
