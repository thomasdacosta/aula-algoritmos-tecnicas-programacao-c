#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[255] = "João";
	int i;
	
	printf("%s", nome);	
	
	
	
}
