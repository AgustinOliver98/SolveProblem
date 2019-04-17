#include <stdio.h>
void Cmatriz (int fila,int col,int M [fila][col])
{
	int i,j;
	for (i=0;i<fila;i++)
	{
		for (j=0;j<col;j++)
		{
			printf ("ingrese el valor: ");
			scanf ("%d",&M[i][j]);
		}
	}
}
