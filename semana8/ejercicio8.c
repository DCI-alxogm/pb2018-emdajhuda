#include <stdio.h>
#include <stdlib.h>
int main ()
{

	int j, *n, s=0;
	printf("Introduce 6 números enteros:\n");

	n=(int*) malloc(6 * sizeof(int));

	for(j = 0; j < 6; ++j)
	{
		scanf("%d",(n + j));
		s += *(n + j);
	}

	printf("suma = %d\n", s);

return 0;
}
