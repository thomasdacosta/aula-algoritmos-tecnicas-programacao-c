#include <stdio.h>

struct aluno
{
	char nome[255];
	int ra;
	int serie;
	int turma;
	char curso[100];
} aluno_anhanguera;

struct aluno aluno_tecnologia;

typedef struct aluno aluno_curso;

int main()
{
	printf("%d\n",sizeof(aluno_anhanguera.nome));
	printf("%d\n",sizeof(aluno_anhanguera.ra));
	printf("%d\n",sizeof(aluno_anhanguera.serie));
	printf("%d\n",sizeof(aluno_anhanguera.turma));
	printf("%d\n",sizeof(aluno_anhanguera.curso));
	printf("%d\n",sizeof(aluno_anhanguera));
}
