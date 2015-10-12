#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a = 1;
	int b = 1;	
	int c = 1;
	
	printf("Variável: %d\n", a);
	printf("Pós-incremento: %d\n", a++);
	printf("Variável: %d\n\n", a);
	
	printf("Variável: %d\n", a);
	printf("Pré-incremento: %d\n", ++a);
	printf("Variável: %d\n\n", a);	
	
	printf("%d\n", b--);
	printf("%d\n", --b);
	
	c += 1;
	printf("%d\n", c);	
	
	c -= 1;
	printf("%d\n", c);		
	
	c *= 2;
	printf("%d\n", c);			
	
	c /= 2;
	printf("%d\n", c);				
}
