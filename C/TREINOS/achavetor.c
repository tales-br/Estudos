#include <stdio.h>

int preenchevetor (int lista[], int x, int a)
{
	int i;
	for (i=0; i < x; i++)
	{
		lista[i] = rand()%a;
	}
}

int mostra (int lista[], int x)
{
	int i;
	
	printf("\nentre com o tamanho do vetor(n): ");
	scanf("%d", &n);
}                            
