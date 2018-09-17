/*Este programa almacena los datos de 10 alumnos y hace un resumen de ello*/
#include <stdio.h>
int main()

{

	FILE* archivo;
	FILE* data;
	int i, N=10, gm=0, gh=0, s1=0, s2=0, s3=0, s4=0, s5=0, s6=0, s7=0, s8=0, s9=0;
	float genero[10], semestre[10], promedio[10], p=0;
	data = fopen("información.txt", "r");

for (i=0; i<N; i++)
{
//Lectura de datos

	genero[i]=0;
	fscanf(data, "%f", &genero[i]);

	semestre[i]=0;
	fscanf(data, "%f", &semestre[i]);

	promedio[i]=0;
	fscanf(data, "%f", &promedio[i]);


//Almacenamiento de datos y cálculos
//Conteo de personas por genero

	if (genero[i]<0 |genero[i]>1)
	{
	printf("Opción invalida. Se cerrara el programa \n");
	return 0;
	}
	if (genero[i]==0)
	{
	gm++;
	}
	if (genero[i]==1)
	{
	gh++;
	}

//Conteo de personas por semestre

	if (semestre[i]<1 |genero[i]>9)
	{
	printf("Opción invalida. Se cerrara el programa \n");
	return 0;
	}
	if (semestre[i]==1)
	{
	s1++;
	}
	if (semestre[i]==2)
	{
	s2++;
	}
	if (semestre[i]==3)
	{
	s3++;
	}
	if (semestre[i]==4)
	{
	s4++;
	}
	if (semestre[i]==5)
	{
	s5++;
	}
	if (semestre[i]==6)
	{
	s6++;
	}
	if (semestre[i]==7)
	{
	s7++;
	}
	if (semestre[i]==8)
	{
	s8++;
	}
	if (semestre[i]==9)
	{
	s9++;
	}


//Sumatoria de promedios
	p=p+promedio[i];
}
	fclose(data);

	p=p/N;

	printf("Se capturaron %i estudiantes de los cuales %i son mujeres y %i son hombres. \n", N, gm, gh);
	printf("El número de estudiantes por semestre es: \n");
	printf("1°:%i \n", s1);
	printf("2°:%i \n", s2);
	printf("3°:%i \n", s3);
	printf("4°:%i \n", s4);
	printf("5°:%i \n", s5);
	printf("6°:%i \n", s6);
	printf("7°:%i \n", s7);
	printf("8°:%i \n", s8);
	printf("9°:%i \n", s9);
	printf("El promedio de los estudiantes es: %f \n", p);

//Esta parte es la que hace el archivo .txt
archivo = fopen("resumen.txt", "w");
	fprintf(archivo, "Se capturaron %i estudiantes de los cuales %i son mujeres y %i son hombres. \n", N, gm, gh);
	fprintf(archivo, "El número de estudiantes por semestre es: \n");
	fprintf(archivo, "1°:%i \n", s1);
	fprintf(archivo, "2°:%i \n", s2);
	fprintf(archivo, "3°:%i \n", s3);
	fprintf(archivo, "4°:%i \n", s4);
	fprintf(archivo, "5°:%i \n", s5);
	fprintf(archivo, "6°:%i \n", s6);
	fprintf(archivo, "7°:%i \n", s7);
	fprintf(archivo, "8°:%i \n", s8);
	fprintf(archivo, "9°:%i \n", s9);
	fprintf(archivo, "El promedio de los estudiantes es: %f \n", p);
	fclose(archivo);

return 0;
}
