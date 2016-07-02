#include <stdio.h>

int main()
{
	double nota_b1;
	double nota_b2;
	double media;
	
	printf("Digite a nota da B1:");
	scanf("%lf", &nota_b1);
	
	printf("Digite a nota da B2:");
	scanf("%lf", &nota_b2);
	
	media = ((nota_b1 * 0.4) + (nota_b2 * 0.6));
	printf("Média: %f", media);
}
