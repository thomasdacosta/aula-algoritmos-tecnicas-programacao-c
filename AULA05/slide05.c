#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5] = { 0, 1, 2, 3, 4 };
	int i;
	
	for (i=0;i<=4;i++)
	{
		printf("posição: %d, valor: %d\n", i, vetor[i]);
	}
}
