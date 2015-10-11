#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double numero;
	
	printf("OPERAÇÕES MATEMÁTICAS\n");
	printf("Digite um número:");
	scanf("%lf", &numero);
	
	printf("Seno: %.2f\n", sin(numero));
	printf("Cosseno: %.2f\n", cos(numero));
	printf("Tangente: %.2f\n", tan(numero));
	
	printf("\n\nDigite um número:");
	scanf("%lf", &numero);
	printf("Raiz Quadrada: %.2f\n", sqrt(numero));
}
