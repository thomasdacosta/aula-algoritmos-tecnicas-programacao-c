#include <stdio.h>
#include <string.h>

struct aluno
{
	char nome[100];
	int ra;
} aluno_tecnologia;

void troca_aluno(char nome[], int ra);

int main()
{
	printf("Digite o nome do aluno:");
	gets(aluno_tecnologia.nome);
	
	printf("Digite o RA do aluno:");	
	scanf("%d\n", &aluno_tecnologia.ra);
	
	troca_aluno(aluno_tecnologia.nome, 
				aluno_tecnologia.ra);
				
	printf("%s\n", aluno_tecnologia.nome);
	printf("%d\n", aluno_tecnologia.ra);
}

void troca_aluno(char nome[], int ra)
{
	strcpy(nome, "Novo Aluno");
	ra = 123456;
}
