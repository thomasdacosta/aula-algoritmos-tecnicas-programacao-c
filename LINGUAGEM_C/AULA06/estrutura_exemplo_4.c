#include <stdio.h>

struct demonstracao
{
	char string[100];
	char caracter;
	int valor_inteiro;
	double valor_double;
} demo;

int main()
{
	printf("Digite o valor da string:");
	gets(demo.string);
	
	printf("Digite os valores:");
	scanf("%c", &demo.caracter);
	scanf("%d", &demo.valor_inteiro);
	scanf("%lf", &demo.valor_double);
	
	printf("Valores digitados: %s, %c, %d, %.2lf", 
				demo.string,
				demo.caracter,
				demo.valor_inteiro,
				demo.valor_double);
}
