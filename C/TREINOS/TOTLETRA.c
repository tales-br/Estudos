/*[TOTLETRA]
Escreva um programa que leia uma linha de texto e imprima a quantidade total de caracteres lidos (incluindo espaço em branco),
a quantidade de vogais e a respectiva percentagem relativamente ao total de caracteres.
P.ex:
Linha digitada: MARCIO BELO
Saída no console:
Total de caracteres: 11
Vogais: 5
Porcentagem relativa ao total: 45,45%
Explicação: o nome digitado tem 11 caracteres ao todo,
sendo 5 vogais; 5 dividido por 11 dá 0,4545... em percentual e formatado com duas casas decimais dá 45,45%
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int qntCarac=0, qntVogais=0,i=0,j=0;
    float percVogais=0;
    char vogais[10]="AaEeIiOoUu",texto[121];

    printf("Insira um texto (MAX 120 caracteres):\n");
    gets(texto);

    qntCarac=strlen(texto);

    for (i=0;i<=qntCarac-1;++i)//nao conta com o \0
    {
        for (j=0;j<=10;++j)
        {
            if (texto[i]==vogais[j])
            {
                qntVogais=qntVogais+1;
            }

        }
    }
    percVogais=((float)(qntVogais)/(float)(qntCarac))*100;

    printf("\nTotal de caracteres:%d",qntCarac);
    printf("\nVogais:%d",qntVogais);
    printf("\nPorcentagem relativa ao total:%.2f%c\n",percVogais,37);//37=% em ascii decimal
}
/*
----CASOS_TESTE----
Linha digitada: EDNA FELIX
Saída no console:
Total de caracteres: 10
Vogais: 4
%:40,00

Linha digitada: AMANDA PUGA
Saída no console:
Total de caracteres: 11
Vogais: 5
%:45,45

Linha digitada: TALES BARBOSA
Saída no console:
Total de caracteres: 13
Vogais: 5
%:38,46

*/
