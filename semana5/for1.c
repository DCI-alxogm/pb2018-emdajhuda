#include <stdio.h>

int main ()

{
	int op, n=5;
	float C, K, F, D;
	
	printf("Ingresa la temperatura en °C y la temperatura final \n");
	scanf("%f", &C);
	scanf("%f", &F);
	
	D=(F-C);

for (op=0; op<n; op++)
{
	K=(C+273.15);

	printf("Temperatura en °C: %f \n", C);
	printf("Temperatura en °K: %f \n", K);
	C=C+D;

}
return 0;
}
