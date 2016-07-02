#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5];

	printf("Digite um valor na posição 3 do vetor: ");
	vetor[1] = 100;
	scanf("%d", &vetor[2]);
	
	printf("Valor digitado: %d\n", vetor[2]);
	printf("Valor na segunda posição: %d", vetor[1]);
}
