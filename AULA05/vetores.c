#include <stdio.h>
#include <locale.h>

#define size_array(x) (sizeof(x)/sizeof(x[0]))

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5] = { 0, 1, 2, 3, 4 };
	int i;
	
	for (i=0;i<=size_array(vetor)-1;i++)
	{
		printf("posição: %d, valor: %d\n", i, vetor[i]);
	}
}
