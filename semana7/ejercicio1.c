#include <stdio.h>
#include <math.h>
int main()
{

	FILE* data;
	FILE* archivo;
	int p,n,j,i,k;
	float a, b,fx, ix=0, x, s=0, e, h;
	
	data = fopen("ejercicio1in.txt", "r");
	archivo = fopen("ejercicio1out.txt", "w");

	fscanf(data, "%i", &p);
	fscanf(data, "%f", &a);
	fscanf(data, "%f", &b);
	fscanf(data, "%i", &n);
        fscanf(data, "%i", &k);
	fclose(data);

	x=a;
	e=(b-a)/n;

	fprintf(archivo, "x\t f(x)\t i(x)\n");
	for (j=1; j<=n; j++)
	{
		fx=pow(x,p);
		h=(x-a)/k;
		s=0.0;
		for (i=1; i<=(k-1); i++)
		{
			s+=pow(a+i*h,p);
		}
	ix+=h*(((pow(a,p)+fx)/2.0)+s);
	fprintf(archivo, "%f\t %f\t %f\n", x, fx, ix);
	x+=e;
}
	fclose(archivo);
return 0;
}


