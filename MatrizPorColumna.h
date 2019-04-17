#include <stdio.h>
void MatrizPorColumna (int fila, int columna, int m[fila][columna])
{
	int i,j ; 
	printf ("ingrese el valor: ");
	for (i=0;i<fila;i++)
	{
		for (j=0;j<columna;j++)
		{
			scanf ("%d", &m[j][i]);
		}
	}
}
