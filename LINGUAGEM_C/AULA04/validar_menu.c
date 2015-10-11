#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao_menu = 0;
	
	while (opcao_menu != 3)
	{
		system("cls");
		printf("Digite uma opção\n");
		printf("1 - Incluir aluno\n");
		printf("2 - Listar aluno\n");
		printf("3 - Sair\n");
		
		scanf("%d", &opcao_menu);
		
		switch (opcao_menu)
		{
			case 1:
			{
				printf("Opção de incluir aluno selecionado.\n");
				getch();
				break;
			}
			case 2:
			{
				printf("Opção de listar aluno selecionado.\n");
				getch();
				break;
			}
			case 3:
			{
				printf("Saindo !!!\n");
				getch();
				break;
			}
			default:
			{
				printf("Opção inválida !!!\n");
				getch();
				break;
			}
		}
	}
	
}
