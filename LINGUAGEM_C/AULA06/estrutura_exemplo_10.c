#include <iostream>
#include <string.h>

using namespace std;

struct curso
{
	char nome_curso[255];
};

struct aluno
{
	char nome[100];
	int ra;
	struct curso cur;
};

int main()
{
	struct aluno alu;
	
	cout << "Digite o nome do aluno:" << endl;
	gets(alu.nome);
	
	cout << "Digite o nome do curso:" << endl;
	gets(alu.cur.nome_curso);
	
	cout << alu.nome << endl;
	cout << alu.cur.nome_curso << endl;	
}
