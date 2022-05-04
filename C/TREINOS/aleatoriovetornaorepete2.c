#include <stdio.h>
#include <stdlib.h>

int geravetoraleatorio (int vetor[], int n, int a)
{
    int i, x;
    i = 0;
	
	while (i < n)
    {
        x = rand()%a;
        if (busca (vetor, i, x) == -1)
        
        vetor[i] = x;
        i++;
    }
    
}

int mostravetor (int vetor[], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
		{
			printf("%d ", vetor[i]);
		}
}

int busca (int vetor[], int n, int x)
{
	int i;
	i = 0;
	
	while (vetor[i] != x && i < n)
		i++;
		return (i);
}

int main()
{
	int X, A;
	
	printf ("Entre com o tamanho do vetor: ");
	scanf ("%d", &X);
	
	printf ("Entre com a amplitude: ");
	scanf ("%d", &A);
	
	
	int V[X];
	
	geravetoraleatorio (V, X, A);
	mostravetor (V, X);
	
	
	system ("pause");
}
