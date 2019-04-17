#include <stdio.h>
void CambioColumna (int fila,int col, int M[fila][col])
{
	int i,j,c,a,b;
	printf ("\ningrese la columna a intercambiar: ");
	scanf ("%d",&j);
	while (j>col)
	{
		printf ("ingrese una columna menor a %d",col);
		printf ("ingrese la columna a intercambiar: ");
	    scanf ("%d",&j);
	}
	printf ("con que columna quiere intercambiar: ");
	scanf ("%d",&c);
	while (c>col)
	{
		printf ("ingrese una columna menor a %d",col);
		printf ("con que columna quiere intercambiar: ");
	    scanf ("%d",&c);
	}
	for (i=0;i<fila;i++)
	{
		a=M[i][c];
		b=M[i][j];
		M[i][j]=a;
		M[i][c]=b;
	}
	
	
}
