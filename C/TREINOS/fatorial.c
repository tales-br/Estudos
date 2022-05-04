#include <stdio.h>
#include <stdlib.h>

int fat (int n);

int main()
{
	int num, fatorial;
	
	printf("Entre com o o numero: ");
	scanf("%d", &num);
	
	fatorial = fat (num);
	
	printf("Resultado = %d", fatorial);	
}

int fat (int n)
{
	int i, r;
	r = 1;
	
	for (i = n; i > 1; i--)
		r = r * i;
		
		return (r);
}
