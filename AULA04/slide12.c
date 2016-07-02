#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	bool p;
	bool q;
	bool r;
	p = true;
	q = false;
	r = true;
	
	if (((q && r) || (!p && r)) && r)
		printf("Verdadeiro !!!\n");
	else
		printf("Falso !!!\n");
	
	printf("Resultado da expressão: %d\n", ((q && r) || (!p && r)) && r);

}
