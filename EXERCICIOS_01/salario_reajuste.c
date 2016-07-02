#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double salario;
	
	printf("SALÁRIO REAJUSTE\n");
	printf("Digite o salário atual:");
	scanf("%lf", &salario);

	printf("Reajuste: %.2f\n", salario * 1.10);
}
