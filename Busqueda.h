#include <stdio.h>
void Busqueda (int num,int tam,int v[])
{
	int izq,centro,derecha,a;
	izq=0;
	derecha=tam;
	char 'a'
	centro=(izq+derecha)/2;
	while (izq<derecha)
	{
		if (v[centro]>num)
		{
			derecha=centro;
			centro=derecha/2;
		}
		else
		{
			izq=centro+1;
			centro=(izq+derecha)/2;
	    }
	    if (v[centro]==num)
	    {
	    	printf ("El numero %d se encuentra en la posicion: %d",num,centro);
	    	return;
		}
	}
	printf ("no se encontro el numero");
}
