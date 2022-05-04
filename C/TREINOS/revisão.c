#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int eh_caractere_pontuacao (char c)
{	
	int i;
	char caractere[2];
	char pont[10];
	pont [0] = '?';
	pont [1] = '!';
	pont [2] = '.';
	pont [3] = 34;
	pont [4] = 39;
	pont [5] = '-';
	pont [6] = ';';
	pont [7] = ',';
	pont [8] = ':';	

	for (i=0;i<=13;i++)
	{
		if (c == pont[i])
		{
			return 1;
		}
		
	}
	return 0;	
} 

int main ()
{
	char linha[100];
	FILE *texto ;
	int i, soma_ponto=0;
	
	texto = fopen ("entrada.txt", "rt");
	
	if (texto == NULL)
	{
		printf ("Nao foi possivel abrir o arquivo!");
	}

while (fgets(linha, 100, texto) != NULL )
	{
		for(i=0; i<strlen(linha); i++)
		{
			soma_ponto = eh_caractere_pontuacao(linha[i]) + soma_ponto;
		}
	}
	
	printf ("%d", soma_ponto);
	
}
