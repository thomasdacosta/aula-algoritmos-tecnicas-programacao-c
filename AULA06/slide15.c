#include <stdio.h>

struct aluno
{
	char nome[100];
	int ra;
} aluno_tecnologia;

void imprimir_aluno(char nome[], int ra);

int main()
{
	printf("Digite o nome do aluno:");
	fgets(aluno_tecnologia.nome, sizeof(aluno_tecnologia.nome), stdin);
	
	printf("Digite o RA do aluno:");	
	scanf("%d", &aluno_tecnologia.ra);
	
	imprimir_aluno(aluno_tecnologia.nome, 
					aluno_tecnologia.ra);
}

void imprimir_aluno(char nome[], int ra)
{
	printf("%s\n", nome);
	printf("%d\n", ra);
}
