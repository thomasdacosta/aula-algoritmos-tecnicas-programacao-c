#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

double somar(double x, double y);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double valor = somar(10, 10);
	printf("%lf", valor);
}

double somar(double x, double y)
{
	double resultado = x + y;
	return resultado;
}
