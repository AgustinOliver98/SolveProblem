#include <stdio.h>
void Mmatriz (int fila, int col, int M [fila][col])
{
	int i,j;
	printf ("La matriz es: ");
	for (i=0;i<fila;i++)
	{
		
		printf ("\n");
		for (j=0;j<col;j++)
		{
			printf ("%d ", M[i][j]);
		}
	}
} 
