/*Este programa va a convertir coordenadas cartesianas a coordenadas esfericas*/
#include <stdio.h>
#include <math.h>

int main()
{
float x1, x2, y1, y2, z1, z2, r1, r2, theta1, theta2, fi1, fi2;

	printf("Este programa transforma coordenadas cartesianas a coordenadas esfericas \n");
	printf("Proporciona las coordenadas cartesianas que deseas transformar \n");
	
	printf("x: \n");
	scanf("%f\n", &x1);
	printf("y: \n");
	scanf("%f\n", &y1);
	printf("z: \n");
	scanf("%f\n", &z1);
	
	r1=sqrt(pow(x1,2)+pow(y1,2)+pow(z1,2));
	theta1=acos(z1/r1);
	theta1=theta1*180/3.1415926;
	fi1=atan(y1/x1);
	fi1=fi1*180/3.1415926;
//CAmbiar las ecuaciones a las de http://laplace.us.es/wiki/index.php/Relaci%C3%B3n_entre_los_distintos_sistemas_de_coordenadas

	printf("r=%f\n", r1);
	printf("theta=%f°\n", theta1);
	printf("fi=%f°\n", fi1);
}
