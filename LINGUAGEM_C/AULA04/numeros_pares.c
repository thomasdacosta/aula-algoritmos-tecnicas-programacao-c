#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

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
		if ((i % 2) == 0)
			printf("Número %d par !!!\n", i);
		else
			printf("Número %d impar !!!\n", i);
	}
}
