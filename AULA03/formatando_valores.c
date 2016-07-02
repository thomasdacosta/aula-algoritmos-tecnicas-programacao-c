#include <stdio.h>

int main()
{
	// Imprime um inteiro
	printf("%d\n", 79);
	// Imprime um inteiro com espaço em branco
	printf("%4d\n", 79);
	// Imprime um inteiro com zero a esquerda
	printf("%04d\n", 79);
	// Imprime ponto flutuante
	printf("%f\n", 3.6);
	// Imprime em notação científica
	printf("%e\n", 16.567837);
	// Imprime um número com uma determinada 
	// qtd. de casas decimais
	printf("%.2f\n", 16.567837);
	// Imprime um tipo double
	printf("%lf\n", 16.567837);
	// Imprime um caracter
	printf("%c\n", 65);
	// Imprime um conjunto de caracteres
	printf("%s\n", "Meu primeiro programa");
}
