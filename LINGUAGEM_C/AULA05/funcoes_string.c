#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char curso[] = "Sistemas da Informação";
	char faculdade[] = " Anhanguera";
	
	printf("%d\n", strlen(curso));
	printf("%s\n", strcat(curso, faculdade));
	
	if (strcmp(curso, faculdade) == 0)
		printf("Strings iguais !!!");
	else
		printf("São diferentes !!!");
}

