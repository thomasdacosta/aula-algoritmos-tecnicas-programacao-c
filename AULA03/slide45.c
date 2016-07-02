#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool p;
	bool q;
	bool S;
	
	p = false;
	q = true;
	
	S = p && q;
	printf("Proposição: %d",S);
	
	S = p || q;
	printf("Proposição: %d",S);
	printf("Proposição: %d",!p);
}
