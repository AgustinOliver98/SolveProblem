#include <stdio.h>
void Simetrica (int fila,int col,int M[fila][col])
{
	int i,j;
	for (i=0;i<fila;i++)
	{
		for (j=0;j<col;j++)
		{
			if (M[i][j]!= M[j][i])
			{
				printf ("La matriz no es simetrica");
				j=col;
				i=fila;
				return;
			}
		}
	}
   printf ("la matriz es simetrica");
}
