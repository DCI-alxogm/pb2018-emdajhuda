#include "ejercicio1.h"
#include "errores.h"
#include <stdlib.h>
int main(int arg, char *argt[])
{
	if(arg==3)
		{
		int x1, x2;
		x1=atoi(argt[1]);
		x2=atoi(argt[2]);
		ejercicio1(x1, x2);
		}

	else if(arg>3)
		{
		error1();
		}

	else
		{
		error2();
		}

return 0;
}
