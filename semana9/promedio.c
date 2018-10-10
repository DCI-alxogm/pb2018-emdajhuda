#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, i;
	float *d, s=0.0, p, o;
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

	s=0.0;
	data = fopen("promedio.txt","r");

	for(i=0; i<n; i++)
	{
		s += pow((*(d + i)-p),2);
	}

	fclose(data);

	o=sqrt(s/(n-1));

	printf("+-%f", o);
free(d);

return 0;
}
