#include <stdio.h>
#include <math.h>

int main ()

{

	FILE* data;
	FILE* archivo;
	int  i1, i2, d;
	float x, exp_x, log_x, sen_x, cos_x, sqrt_x;

	data = fopen("intervalos.txt", "r");
	archivo = fopen("resultados.txt", "w");
	fscanf(data, "%i", &i1);
	fscanf(data, "%i", &i2);
	fscanf(data, "%i", &d);
	fclose(data);

for (x=i1; x<=i2; x+=d)
{
	exp_x=exp(x);
	log_x=log(x);
	sen_x=sin(x);
	cos_x=cos(x);
	sqrt_x=sqrt(x);
	
	fprintf(archivo, "x=%f \n", x);
	fprintf(archivo, "exp=%f \n", exp_x);
	fprintf(archivo, "log=%f \n", log_x);
	fprintf(archivo, "sen=%f \n", sen_x);
	fprintf(archivo, "cos=%f \n", cos_x);
	fprintf(archivo, "sqrt=%f \n", sqrt_x);
}
	fclose(archivo);
return 0;
}
