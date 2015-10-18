#include <iostream>
#include <string.h>

using namespace std;

struct funcionario
{
	char nome[255];
	char cargo[255];
	double salario;
	int idade;
};

void aumentar_salario(double &salario, int percen);

int main()
{
	struct funcionario func;
	
	cout << "Digite o salário:" << endl;
	cin >> func.salario;
	aumentar_salario(func.salario, 20);
	cout << "Novo salário:" << func.salario;
}

void aumentar_salario(double &salario, int percen)
{
	double val = (percen / 100.0);
	salario = salario * (1 + val);
}
