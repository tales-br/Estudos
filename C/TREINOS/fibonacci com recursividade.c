#include <stdio.h>
#include <stdlib.h>

//Fibonacci com recursividade

int fib (int n);

int main()
{
	int num, fibonacci;
	
	printf("Entre com o numero: ");
	scanf("%d", &num);
	
	fibonacci = fib (num);
	
	printf("Resultado = %d", fibonacci);	
}

int fib (int n)
{
	if (n < 3)
	return (1);
	
	else
	return (fib(n-1) + fib(n-2));
}
