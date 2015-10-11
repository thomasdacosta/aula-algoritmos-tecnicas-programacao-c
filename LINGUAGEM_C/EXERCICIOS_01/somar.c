#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double x, y;
	double resultado;
	
	printf("SOMAR\n");
	printf("Digite 1º número:");
	scanf("%lf", &x);
	
	printf("Digite 2º número:");
	scanf("%lf", &y);	
	
	resultado = x + y;
	printf("Resultado: %.2f\n", resultado);
}
