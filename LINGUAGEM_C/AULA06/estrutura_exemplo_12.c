#include <iostream>
#include <string.h>

using namespace std;

struct aluno
{
	char nome[100];
	double nota_b1;
	double nota_b2;
};

double media(double nota_b1, double nota_b2);

int main()
{
	struct aluno alu;
	
	cout << "Nota B1:" << endl;
	cin >> alu.nota_b1;
	
	cout << "Nota B2:" << endl;
	cin >> alu.nota_b2;
	cout << "Media:" << media(alu.nota_b1, alu.nota_b2);
}

double media(double nota_b1, double nota_b2)
{
	return (nota_b1 + nota_b2) / 2;
}
