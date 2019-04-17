#include <stdio.h>
void Cambiofila (int fila,int col, int M[fila][col])
{
	int i,j,c,a,b;
	printf ("\ningrese la fila a intercambiar: ");
	scanf ("%d",&i);
	while (j>fila)
	{
		printf ("ingrese una fila menor a %d",col);
		printf ("ingrese la columna a intercambiar: ");
	    scanf ("%d",&i);
	}
	printf ("\ncon que fila quiere intercambiar: ");
	scanf ("%d",&c);
	while (c>fila)
	{
		printf ("ingrese una fila menor a %d",col);
		printf ("con que fila quiere intercambiar: ");
	    scanf ("%d",&c);
	}
	for (j=0;j<col;j++)
	{
		a=M[i][j];
		b=M[c][j];
		M[i][j]=b;
		M[c][j]=a;
	}
	
	
}
