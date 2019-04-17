#include <stdio.h>
void Transpuesta (int fila, int col, int M[fila][col],int T[fila][col])
{
	int i,j;
	for (i=0;i<fila;i++)
	{
		for (j=0;j<col;j++)
		{
		    T[i][j]=M[j][i];
		}
	}
}
