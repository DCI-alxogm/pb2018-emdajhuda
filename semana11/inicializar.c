#include <stdio.h>

float temp(T[i-1][j], T[i+1][j], T[i][j+1], T[i][j-1])
{
float T[][];

*T[i][j]=(*T[i-1][j]+*T[i+1][j]+*T[i][j+1]+*T[i][j-1])/4;

return *T[i][j];
}
