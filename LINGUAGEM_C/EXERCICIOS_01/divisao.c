#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2;
	int quociente, resto;
	
	printf("DIVISÃO\n");
	printf("Digite o dividendo:");
	scanf("%d", &valor1);
	
	printf("Digite o divisor:");
	scanf("%d", &valor2);	
	
	quociente = valor1 / valor2;
	resto = valor1 % valor2; 
	
	printf("Dividendo: %d\n", valor1);
	printf("Divisor: %d\n", valor2);
	printf("Quociente: %d\n", quociente);
	printf("Resto: %d\n", resto);
}
