#include <stdio.h>
#include <locale.h>

void ola_mundo();

int main()
{
	setlocale(LC_ALL, "Portuguese");
	ola_mundo();
}

void ola_mundo()
{
	printf("Olá Mundo !!!");
}
