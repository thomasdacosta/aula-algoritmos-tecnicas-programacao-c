#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[255] = "João";
	char cidade[255];
	
	printf("Olá %s !!! Qual a sua cidade de nascimento? ", nome);
	fgets(cidade, sizeof(cidade), stdin);
	
	printf("%s você nasceu em %s", nome, cidade);	
}
