#include <stdio.h>
void Ordenamiento (int tam,int v[])
{
	int i=0,j=i+1,a;
	for (i=0;i<tam;i++)
	{
		for (j=i+1;j<tam;j++)
		{
			if (v[j]<v[i])
			{
				a=v[i];
				v[i]=v[j];
				v[j]=a;
			}
		}
	}
}
