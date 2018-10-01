/*Creado el 30 de septiembre del 2018 por Juda Rodriguez (emdajhuda)*/
//Se incluyo la libreria de math para el calculo de las raices y potencias. 
#include <stdio.h>
#include <math.h>
int main()
//Definición de variables

{
	//Primero los documentos
	FILE* data;
	FILE* mercurio;
	FILE* venus;
	FILE* tierra;
	FILE* marte;
	FILE* jupiter;
	FILE* saturno;
	FILE* urano;
	FILE* neptuno;
	FILE* pluton;
	
	//Luego las que vamos ausar para escanear, operar e imprimir
	int a, j, c;
	float G, M;
	float x[9], y[9], z[9], x0[9], y0[9], z0[9], r[9], te[9], h[9];
	double vx[9], vy[9], vz[9], vx0[9], vy0[9], vz0[9], m[9];

//Aqui definimos el valor de la constante de gravitación para asi no tener que ponerla en cada operación
G=4*(pow(3.1416,2));
//Para escanear las variables de forma mas rapida se uso un for con nueve espacios para cada variable, solo la masa del sol se tomo aparte por que es igual para todos los planetas
	data = fopen("informacion.txt", "r");
	
	fscanf(data, "%f", &M);

for (j=0; j<=8; j++)
	{
		fscanf(data, "%f %f %lf %f %f %f %lf %lf %lf", &te[j], &h[j], &m[j], &x0[j], &y0[j], &z0[j], &vx0[j], &vy0[j], &vz0[j]);
	}
	fclose(data);
//Empezamos el calculo de la orbita de mercurio abriendo el documento donde se van a imprimir los datos
	mercurio = fopen("mercurio.txt", "w");
//Primero definimos el numero de calculos a realizar
a=te[0]/h[0];
//Despues inicializo un contador para no imprimir todos los datos, asi solo se imprime una fracción de los mismos
c=0;
//Se inicia el ciclo de operaciones para la orbita de mercurio. Tendra de limite 0 a "a" y aumentara de 1 en 1.
for (j=0; j<=a; j++)
	{
//Aqui se calculara la distacia total, que es la magnitud del vector distancia.
		r[0]=sqrt(pow(x0[0],2)+pow(y0[0],2)+pow(z0[0],2));
//Estos son los calculos de la posición
		x[0]=x0[0]+(vx0[0]*h[0]);
		y[0]=y0[0]+(vy0[0]*h[0]);
		z[0]=z0[0]+(vz0[0]*h[0]);
//Este es el calculo de las velocidades
		vx[0]=vx0[0]-((h[0]*G*M*x0[0])/pow(r[0],3));
		vy[0]=vy0[0]-((h[0]*G*M*y0[0])/pow(r[0],3));
		vz[0]=vz0[0]-((h[0]*G*M*z0[0])/pow(r[0],3));
//Aqui se pone de condición de que solo se impriman los datos cada 500 ciclos de operaciones
			if (c%500==0)
			{
			fprintf(mercurio , "%f,\t %f,\t %f,\t %lf,\t %lf,\t %lf,\n", x[0], y[0], z[0], vx[0], vy[0], vz[0]);
			}
//Se igualan los valores iniciales a los de los resultados para usarlos en el siguinete ciclo.
		x0[0]=x[0];
		y0[0]=y[0];
		z0[0]=z[0];
		vx0[0]=vx[0];
		vy0[0]=vy[0];
		vz0[0]=vz[0];
//Se suma un número al contador
		c++;
	}
//Cerramos el archivo de texto donde se guardan los datos
	fclose(mercurio);
//Se repite el procedimiento para Venus
	venus = fopen("venus.txt", "w");
a=te[1]/h[1];
c=0;
for (j=0; j<=a; j++)
	{

		r[1]=sqrt(pow(x0[1],2)+pow(y0[1],2)+pow(z0[1],2));
		x[1]=x0[1]+(vx0[1]*h[1]);
		y[1]=y0[1]+(vy0[1]*h[1]);
		z[1]=z0[1]+(vz0[1]*h[1]);

		vx[1]=vx0[1]-((h[1]*G*M*x0[1])/pow(r[1],3));
		vy[1]=vy0[1]-((h[1]*G*M*y0[1])/pow(r[1],3));
		vz[1]=vz0[1]-((h[1]*G*M*z0[1])/pow(r[1],3));

			if (c%500==0)
			{
			fprintf(venus , "%f,\t %f,\t %f,\t %lf,\t %lf,\t %lf,\n", x[1], y[1], z[1], vx[1], vy[1], vz[1]);
			}

		x0[1]=x[1];
		y0[1]=y[1];
		z0[1]=z[1];
		vx0[1]=vx[1];
		vy0[1]=vy[1];
		vz0[1]=vz[1];

		c++;
	}
	fclose(venus);
//Se repite el procedimiento para Tierra
	tierra = fopen("tierra.txt", "w");
a=te[2]/h[2];
c=0;
for (j=0; j<=a; j++)
	{

		r[2]=sqrt(pow(x0[2],2)+pow(y0[2],2)+pow(z0[2],2));
		x[2]=x0[2]+(vx0[2]*h[2]);
		y[2]=y0[2]+(vy0[2]*h[2]);
		z[2]=z0[2]+(vz0[2]*h[2]);

		vx[2]=vx0[2]-((h[2]*G*M*x0[2])/pow(r[2],3));
		vy[2]=vy0[2]-((h[2]*G*M*y0[2])/pow(r[2],3));
		vz[2]=vz0[2]-((h[2]*G*M*z0[2])/pow(r[2],3));

			if (c%500==0)
			{
			fprintf(tierra , "%f,\t %f,\t %f,\t %lf,\t %lf,\t %lf,\n", x[2], y[2], z[2], vx[2], vy[2], vz[2]);
			}

		x0[2]=x[2];
		y0[2]=y[2];
		z0[2]=z[2];
		vx0[2]=vx[2];
		vy0[2]=vy[2];
		vz0[2]=vz[2];

		c++;
	}
	fclose(tierra);
//Se repite el procedimiento para Marte
	marte = fopen("marte.txt", "w");
a=te[3]/h[3];
c=0;
for (j=0; j<=a; j++)
	{

		r[3]=sqrt(pow(x0[3],2)+pow(y0[3],2)+pow(z0[3],2));
		x[3]=x0[3]+(vx0[3]*h[3]);
		y[3]=y0[3]+(vy0[3]*h[3]);
		z[3]=z0[3]+(vz0[3]*h[3]);

		vx[3]=vx0[3]-((h[3]*G*M*x0[3])/pow(r[3],3));
		vy[3]=vy0[3]-((h[3]*G*M*y0[3])/pow(r[3],3));
		vz[3]=vz0[3]-((h[3]*G*M*z0[3])/pow(r[3],3));

			if (c%500==0)
			{
			fprintf(marte , "%f,\t %f,\t %f,\t %lf,\t %lf,\t %lf,\n", x[3], y[3], z[3], vx[3], vy[3], vz[3]);
			}

		x0[3]=x[3];
		y0[3]=y[3];
		z0[3]=z[3];
		vx0[3]=vx[3];
		vy0[3]=vy[3];
		vz0[3]=vz[3];

		c++;
	}
	fclose(marte);
//Se repite el procedimiento para Jupiter
	jupiter = fopen("jupiter.txt", "w");
a=te[4]/h[4];
c=0;
for (j=0; j<=a; j++)
	{

		r[4]=sqrt(pow(x0[4],2)+pow(y0[4],2)+pow(z0[4],2));
		x[4]=x0[4]+(vx0[4]*h[4]);
		y[4]=y0[4]+(vy0[4]*h[4]);
		z[4]=z0[4]+(vz0[4]*h[4]);

		vx[4]=vx0[4]-((h[4]*G*M*x0[4])/pow(r[4],3));
		vy[4]=vy0[4]-((h[4]*G*M*y0[4])/pow(r[4],3));
		vz[4]=vz0[4]-((h[4]*G*M*z0[4])/pow(r[4],3));

			if (c%500==0)
			{
			fprintf(jupiter , "%f,\t %f,\t %f,\t %lf,\t %lf,\t %lf,\n", x[4], y[4], z[4], vx[4], vy[4], vz[4]);
			}

		x0[4]=x[4];
		y0[4]=y[4];
		z0[4]=z[4];
		vx0[4]=vx[4];
		vy0[4]=vy[4];
		vz0[4]=vz[4];
		c++;
	}
	fclose(jupiter);
//Se repite el procedimiento para Saturno
	saturno = fopen("saturno.txt", "w");
a=te[5]/h[5];
c=0;
for (j=0; j<=a; j++)
	{

		r[5]=sqrt(pow(x0[5],2)+pow(y0[5],2)+pow(z0[5],2));
		x[5]=x0[5]+(vx0[5]*h[5]);
		y[5]=y0[5]+(vy0[5]*h[5]);
		z[5]=z0[5]+(vz0[5]*h[5]);

		vx[5]=vx0[5]-((h[5]*G*M*x0[5])/pow(r[5],3));
		vy[5]=vy0[5]-((h[5]*G*M*y0[5])/pow(r[5],3));
		vz[5]=vz0[5]-((h[5]*G*M*z0[5])/pow(r[5],3));

			if (c%500==0)
			{
			fprintf(saturno , "%f,\t %f,\t %f,\t %lf,\t %lf,\t %lf,\n", x[5], y[5], z[5], vx[5], vy[5], vz[5]);
			}

		x0[5]=x[5];
		y0[5]=y[5];
		z0[5]=z[5];
		vx0[5]=vx[5];
		vy0[5]=vy[5];
		vz0[5]=vz[5];

		c++;
	}
	fclose(saturno);
//Se repite el procedimiento para Urano
	urano = fopen("urano.txt", "w");
a=te[6]/h[6];
c=0;
for (j=0; j<=a; j++)
	{

		r[6]=sqrt(pow(x0[6],2)+pow(y0[6],2)+pow(z0[6],2));
		x[6]=x0[6]+(vx0[6]*h[6]);
		y[6]=y0[6]+(vy0[6]*h[6]);
		z[6]=z0[6]+(vz0[6]*h[6]);

		vx[6]=vx0[6]-((h[6]*G*M*x0[6])/pow(r[6],3));
		vy[6]=vy0[6]-((h[6]*G*M*y0[6])/pow(r[6],3));
		vz[6]=vz0[6]-((h[6]*G*M*z0[6])/pow(r[6],3));

			if (c%500==0)
			{
			fprintf(urano , "%f,\t %f,\t %f,\t %lf,\t %lf,\t %lf,\n", x[6], y[6], z[6], vx[6], vy[6], vz[6]);
			}

		x0[6]=x[6];
		y0[6]=y[6];
		z0[6]=z[6];
		vx0[6]=vx[6];
		vy0[6]=vy[6];
		vz0[6]=vz[6];

		c++;
	}
	fclose(urano);
//Se repite el procedimiento para Neptuno
	neptuno = fopen("neptuno.txt", "w");
a=te[7]/h[7];
c=0;
for (j=0; j<=a; j++)
	{

		r[7]=sqrt(pow(x0[7],2)+pow(y0[7],2)+pow(z0[7],2));
		x[7]=x0[7]+(vx0[7]*h[7]);
		y[7]=y0[7]+(vy0[7]*h[7]);
		z[7]=z0[7]+(vz0[7]*h[7]);

		vx[7]=vx0[7]-((h[7]*G*M*x0[7])/pow(r[7],3));
		vy[7]=vy0[7]-((h[7]*G*M*y0[7])/pow(r[7],3));
		vz[7]=vz0[7]-((h[7]*G*M*z0[7])/pow(r[7],3));

			if (c%500==0)
			{
			fprintf(neptuno , "%f,\t %f,\t %f,\t %lf,\t %lf,\t %lf,\n", x[7], y[7], z[7], vx[7], vy[7], vz[7]);
			}

		x0[7]=x[7];
		y0[7]=y[7];
		z0[7]=z[7];
		vx0[7]=vx[7];
		vy0[7]=vy[7];
		vz0[7]=vz[7];

		c++;
	}
	fclose(neptuno);
//Se repite el procedimiento para pluton
	pluton = fopen("pluton.txt", "w");
a=te[8]/h[8];
c=0;
for (j=0; j<=a; j++)
	{

		r[8]=sqrt(pow(x0[8],2)+pow(y0[8],2)+pow(z0[8],2));
		x[8]=x0[8]+(vx0[8]*h[8]);
		y[8]=y0[8]+(vy0[8]*h[8]);
		z[8]=z0[8]+(vz0[8]*h[8]);

		vx[8]=vx0[8]-((h[8]*G*M*x0[8])/pow(r[8],3));
		vy[8]=vy0[8]-((h[8]*G*M*y0[8])/pow(r[8],3));
		vz[8]=vz0[8]-((h[8]*G*M*z0[8])/pow(r[8],3));

			if (c%500==0)
			{
			fprintf(pluton , "%f,\t %f,\t %f,\t %lf,\t %lf,\t %lf,\n", x[8], y[8], z[8], vx[8], vy[8], vz[8]);
			}

		x0[8]=x[8];
		y0[8]=y[8];
		z0[8]=z[8];
		vx0[8]=vx[8];
		vy0[8]=vy[8];
		vz0[8]=vz[8];

		c++;
	}
	fclose(pluton);
//Se termina el programa
return 0;
}
//El programa fue concluido el 01/10/2018 por Judá Rodríguez (emdajhuda)
