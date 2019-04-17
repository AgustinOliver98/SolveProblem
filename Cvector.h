#include <stdio.h>
void Cvector (int tam, int vec [])
{
	int i;
	for (i=0;i<tam;i++)
	{
		printf ("ingrese un numero: ");
		scanf ("%d",&vec[i]);
	}
}
