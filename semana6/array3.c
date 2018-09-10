#include <stdio.h>
int main()

{

	int i, N;
	float numeros[10];

	printf("Determina el número de elementos a trabajar: \n");
	scanf("%i", &N);
//No es la mejor forma para definir el número de elementos
	printf("Determina los números para trabajar: \n");

for (i=0; i<N; i++)
{
	numeros[i]=0;
	scanf("%f", &numeros[i]);
	numeros[i]*=2;
	printf("%f \n", numeros[i]);
}
return 0;
}
