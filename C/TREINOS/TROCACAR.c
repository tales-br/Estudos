/*[TROCACAR]
Escreva um programa que utilize a funcao "replace" que aceita um array de caracteres como parametro e retorna um inteiro.
A funcao substitui todos os espacos do seu parametro pelo caractere "-", e retorna o numero de substituicoes feitas.
O programa que a usa  devera testar a sua funcionalidade.
*/

#include<stdio.h>
#include<string.h>

#define MAX_TXT 121

int replace(char x[MAX_TXT])//podia deixar vazio... = char x []
{
    int i=0,dash=0,tamanho=0;

    tamanho=strlen(x);

    for (i=0;i<tamanho;i++)
    {
        if (x[i]==' ')//ou (char)32
        {
            x[i]='-';//ou (char)45
            dash=dash+1;
        }

    }
    return (dash);
}
//****************************************
int main()
{
    char texto[MAX_TXT];

    printf("Insira um texto[MAX %d]:",MAX_TXT-1);//sempre reservamos 1 para o \0
    gets(texto);

    printf("\nTROCAS=%d\n",replace(texto));
    printf("\n%s\n",texto);

    return (0);
}
