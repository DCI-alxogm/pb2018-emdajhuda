/*Este programa convierte la edad de grados °C a grados °K y °F. Y despues de grados °F a grados °C*/

#include <stdio.h>

int main()

{
	float C1, F1, K1, C2, F2;
	printf("En este programa podras convertir de °C a °F y °K \n");
	printf("Para hacerlo proporciona la temperatura en °C que deseas transformar \n");
	scanf("%f \n", &C1);
	K1=C1+273.15;
	printf("La temperatura en °K es: %f\n", K1);
	F1=(C1*1.8)+32;
	printf("La temperatura en °F es: %f\n", F1);
	printf("Ahora mediremos de °F a °C\n");
	printf("Para hacerlo proporciona la temperatura en °F que deseas transformar \n");
	scanf("%f \n", &F2);
	C2=(F2-32)/1.8;
	printf("La temperatura en °C es: %f\n", C2);
}
/*Este programa fue realizado el 20 de Agosto del 2018 por Judá Rodríguez (emdajhuda)*/
