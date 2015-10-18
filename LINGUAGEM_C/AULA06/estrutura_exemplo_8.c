#include <iostream>
#include <string.h>

using namespace std;

struct aluno
{
	char nome[100];
	int ra;
};

void ler_aluno(struct aluno &alu);

int main()
{
	struct aluno aluno_tecnologia;
	ler_aluno(aluno_tecnologia);
	cout << aluno_tecnologia.nome << endl;
	cout << aluno_tecnologia.ra << endl;
}

void ler_aluno(struct aluno &alu)
{
	cout << "Digite o nome do aluno:" << endl;
	gets(alu.nome);
	
	cout << "Digite o RA do aluno:" << endl;
	cin >> alu.ra;
}
