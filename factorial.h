#include <stdio.h>
int factorial (a)
{
	int i=0,Total=1;
	i=a;
	if (i==0)
	{
		return i;
	}
	while (i>0)
	{
		Total=Total*i;
		i=i-1;
	}
	return Total;
}

