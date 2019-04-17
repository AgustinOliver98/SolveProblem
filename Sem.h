#include <stdio.h>
int Sem(int fila, int col, int M[20][20])
{
	int i,j,suma=0;
	for (i=0;i<fila;i++)
	{
		for (j=0;j<col;j++)
		{
			suma=suma+M[i][j];
		}
	}
	printf ("%d",suma);
	return suma;
}
