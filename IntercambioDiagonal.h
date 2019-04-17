#include <stdio.h>
void IntercambioDiagonal (int fila,int col,int M [fila][col])
{
	int i,j,m=col-1,n=0,a,b;
	while (n<fila)
	{
		while (m>=0)
		{
			for (i=0;i<fila;i++)
			{
			   for (j=0;j<col;j++)
				{
					if (i==j)
					{
						a=M[i][j];
						b=M[n][m];	
						M[i][j]=b;
						M[n][m]=a;
						n++;
						m--;
					}
				}
			}
			
		}
	}
}
