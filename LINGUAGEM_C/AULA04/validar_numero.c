#include <stdio.h>
#include <locale.h>

int main()
{
	int numero;

	setlocale(LC_ALL, "Portuguese");

	printf("Digite um número entre 0 e 10: ");
	scanf("%d", &numero);
	
	if (numero >=0 && numero <= 10)
	{
		printf("Número válido !!!\n");
		printf("Número digitado: %d\n", numero);
	}
	else
		printf("Número inválido !!!\n");
	
	printf("Bye !!!\n");
	getch();
}
