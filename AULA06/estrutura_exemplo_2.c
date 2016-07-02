#include <stdio.h>

struct demonstracao
{
	char caracter;
	double valor1;
	float valor2;
	int valor3;
} demo;

int main()
{
	demo.caracter = 'A';
	demo.valor1 = 3.2;
	demo.valor2 = 6.7;
	demo.valor3 = 45;
	
	printf("%c\n", demo.caracter);
	printf("%.2lf\n", demo.valor1);
	printf("%.2f\n", demo.valor2);
	printf("%d\n", demo.valor3);
}
