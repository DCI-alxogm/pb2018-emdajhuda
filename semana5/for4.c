#include <stdio.h>
#include <math.h>

int main ()

{

	int  i1, i2, d;
	float x, exp_x, log_x, sen_x, cos_x, sqrt_x;
	
	printf("Define un intervalo para realizar las operaciones: \n");
	scanf("%i", &i1);
	scanf("%i", &i2);
	printf("Define un espaciado para realizar las operaciones: \n");
	scanf("%i", &d);

for (x=i1; x<=i2; x+=d)
{
	exp_x=exp(x);
	log_x=log(x);
	sen_x=sin(x);
	cos_x=cos(x);
	sqrt_x=sqrt(x);
	
	printf("x=%f \n", x);
	printf("exp=%f \n", exp_x);
	printf("log=%f \n", log_x);
	printf("sen=%f \n", sen_x);
	printf("cos=%f \n", cos_x);
	printf("sqrt=%f \n", sqrt_x);
}
return 0;
}
