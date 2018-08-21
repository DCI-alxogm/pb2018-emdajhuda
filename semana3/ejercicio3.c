/*Este programa va a convertir coordenadas cartesianas a coordenadas esfericas fue creado el 20/08/2018 por Judá Rodríguez(emdajhuda) y terminado el 21/08/2018*/
#include <stdio.h>
#include <math.h>

int main()
{
float x1, x2, y1, y2, z1, z2, r1, r2, theta1, theta2, fi1, fi2;

	printf("Este programa transforma coordenadas cartesianas a coordenadas esfericas y viceversa \n");
	printf("Proporciona las coordenadas cartesianas que deseas transformar: \n");
	
	printf("x: ");
	scanf("%f", &x1);
	printf("y: ");
	scanf("%f", &y1);
	printf("z: ");
	scanf("%f", &z1);
	
	(r1=(sqrt((pow(x1,2))+(pow(y1,2))+(pow(z1,2)))));
;
	theta1=atan((sqrt(pow(x1,2)+pow(y1,2)))/z1);
	theta1=theta1*180/3.1415926;
	fi1=atan(y1/x1);
	fi1=fi1*180/3.1415926;

	printf("r=	%f\n", r1);
	printf("theta=	%f°\n", theta1);
	printf("fi=	%f°\n", fi1);
	printf("Proporciona las coordenadas esfericas que deseas transformar: \n");
	
	printf("r: ");
	scanf("%f", &r2);
	printf("theta: ");
	scanf("%f", &theta2);
	printf("fi: ");
	scanf("%f", &fi2);
	
	theta2=theta2*3.1415926/180;
	fi2=fi2*3.1415926/180;

	x2=r2*sin(theta2)*cos(fi2);
	y2=r2*sin(theta2)*sin(fi2);
	z2=r2*cos(theta2);
	
	printf("x=	%f\n", x2);
	printf("y=	%f\n", y2);
	printf("z=	%f\n", z2);
}
