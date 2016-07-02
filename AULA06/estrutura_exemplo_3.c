#include <stdio.h>
#include <strings.h>

struct demonstracao
{
	char string[100];
	int vetor_inteiro[10];
	double vetor_double[5];
} demo;

int main()
{
	strcpy(demo.string, "Valor da String 1");
	
	demo.vetor_inteiro[0] = 1;
	demo.vetor_inteiro[2] = 2;
	demo.vetor_double[4] = 5.6;
	
	printf("%s\n", demo.string);
	printf("%d\n", demo.vetor_inteiro[0]);
	printf("%d\n", demo.vetor_inteiro[2]);
	printf("%.2lf\n", demo.vetor_double[4]);
}
