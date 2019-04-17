#include <stdio.h>
void Mvector (int tam,int v[])
{
	int i;
	printf ("El vector es: ( ");
	for (i=0;i<tam-1;i++)
	{
		printf ("%d,", v[i]);
	}
	printf (" %d)",v[i]);
}
