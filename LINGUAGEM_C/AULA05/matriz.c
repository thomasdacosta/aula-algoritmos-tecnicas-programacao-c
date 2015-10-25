#include <stdio.h>

int main()
{
	int valor[4][4] = { 
						{0, 0 ,0 ,0},
						{0, 1 ,1 ,0},
						{0, 1 ,1 ,0},
						{0, 0 ,0 ,0} 
					  };
					  
	valor[0][2] = 22;
	int i, j;
					  
	for (i=0;i<=3;i++)
	{
		for (j=0;j<=3;j++)
			printf("%d", valor[i][j]);
		printf("\n");
	}
	
}
