#include <stdio.h>
int main ()
{

	int j, n[6], s=0;
	printf("Introduce 6 números enteros:\n");
	for(j = 0; j < 6; ++j)
	{
		scanf("%d",(n + j));
		s += *(n + j);
	}

	printf("suma = %d\n", s);

return 0;
}
