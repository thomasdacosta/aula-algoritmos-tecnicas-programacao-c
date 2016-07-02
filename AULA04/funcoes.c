#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

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
