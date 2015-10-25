#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int i;
	int inicio, fim;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número inicial:");
	scanf("%d", &inicio);
	
	printf("Digite um número final:");
	scanf("%d", &fim);	
	
	for (i=inicio;i<=fim;i++)
	{
		printf("Contando %d\n", i);
	}
}
