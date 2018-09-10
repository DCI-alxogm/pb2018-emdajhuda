#include <stdio.h>
int main()

{

	int i, N=10;
	float numeros[10];

for (i=0; i<N; i++)
{	
	numeros[i]=0;
}
for (i=0; i<N; i++)
{	
	scanf("%f", &numeros[i]);
}
for (i=0; i<N; i++)
{
	printf("%f \n", numeros[i]);
}
return 0;
}
