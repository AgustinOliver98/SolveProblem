#include <stdio.h>
void Sumamatriz (int fila, int col,int A [fila][col],int B [fila][col],int C [fila][col])
{
	int i,j;
	for (i=0;i<fila;i++)
	{
		for (j=0;j<col;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
}
