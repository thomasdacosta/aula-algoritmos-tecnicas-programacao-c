#include <iostream>
#include <string.h>

using namespace std;

struct aluno
{
	char nome[100];
	int ra;
};

void imprimir_aluno(struct aluno alu);

int main()
{
	struct aluno aluno_tecnologia;
	
	cout << "Digite o nome do aluno:" << endl;
	gets(aluno_tecnologia.nome);
	
	cout << "Digite o RA do aluno:" << endl;
	cin >> aluno_tecnologia.ra;
	imprimir_aluno(aluno_tecnologia);
}

void imprimir_aluno(struct aluno alu)
{
	cout << alu.nome << endl;
	cout << alu.ra << endl;
}
