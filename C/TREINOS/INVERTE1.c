/*[INVERTE1]
Escreva um programa que leia um nome no teclado e o exiba de forma invertida.
Linha digitada:
MARCIO BELO
Saída no console:
OLEB OICRAM
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char nome[121];
    int qntCarac=0,cont=0,teste1=0,teste2=0;

    printf("Escreva um nome (MAX 120 caracteres):\n");
    gets(nome);
    qntCarac=strlen(nome)-1;//tirando o \0

    for (cont=qntCarac;cont>=0;--cont)
    {
        printf("%c",nome[cont]);
    }

}

/*
----CASOS_TESTE----
Linha digitada:
AMANDA PUGA
Saída no console:
AGUP ADNAMA

Linha digitada:
EDNA FELIX
Saída no console:
XILEF ADNE

Linha digitada:
TALES BARBOSA
Saída no console:
ASOBRAB SELAT

*/
