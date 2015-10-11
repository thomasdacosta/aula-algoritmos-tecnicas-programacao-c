#include <stdio.h>
#include <stdbool.h>

int main()
{
	int idade;
	float salario;
	double numero_pi;
	char letra;
	bool logico;

	idade = 25;
	salario = 12560.34;
	numero_pi = 3.14159265359;	
	letra = 'A';
	logico = true;
	
	printf("%d, %lf, %f, %c, %d", 
		idade, salario, numero_pi, letra, logico);
}
