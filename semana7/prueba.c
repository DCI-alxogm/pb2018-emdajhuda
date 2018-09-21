#include <stdio.h>
#include <math.h>
int main()
{

	FILE* data;
	FILE* archivo;
	int n , j, i;
	float p, a, b, fx, ix=0, x, s, e;
	
	data = fopen("ejercicio1in.txt", "r");

	fscanf(data, "%f", &p);
	fscanf(data, "%f", &a);
	fscanf(data, "%f", &b);
	fscanf(data, "%i", &n);

	fclose(data);

	x=a;
	e=(b-a)/n;
	archivo = fopen("ejercicio1out.txt", "w");

	fprintf(archivo, "x\t f(x)\t i(x)\n");
	for (j=1; j<=(n+1); j++)
	{
		fx=pow(x,p);
		s=0.0;
		for (i=1; i<=(n-1); i++)
		{
			s+=2*(pow((a+(i*e)),p));
		}
	ix=(e/2)*(pow(a,p)+s+pow(b,p));
	fprintf(archivo, "%f\t %f\t %f\n", x, fx, ix);

	x+=e;

}
	fclose(archivo);
return 0;
}

