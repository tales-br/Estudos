/*[ANAGRAMA]
Faça um programa que leia duas frases e indique se elas são anagramas.
Um anagrama de uma palavra é outra palavra escrita com os mesmos caracteres.
Por exemplo, "porta" e "tropa" são anagramas.

Caso de teste 1:
Linhas digitadas:
porta
tropa
Saída no console:
anagramas

Caso de teste 2:
Linhas digitadas: marcio
mario
Saída no console:
nao sao anagramas
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int caracTxt1=0,caracTxt2=0,match=0,match2=0,control=0,i=0,j=0;
    char txt1[121],txt2[121];

    printf("Insira a primeira palavra (MAX 120 caracteres):\n");
    gets(txt1);

    printf("Insira a segunda palavra (MAX 120 caracteres):\n");
    gets(txt2);

    caracTxt1=strlen(txt1);

    caracTxt2=strlen(txt2);

/*printf("\nQnts caracteres no texto1%d",caracTxt1);
printf("\nQnts caracteres no texto2%d",caracTxt2);*/

    if (caracTxt1!=caracTxt2)//1ºteste
    {
        printf("\nNao sao anagramas. cod(1)");
    }
    else
    {
//**************************************************************
        for(i=0;i<caracTxt1;i++) //2ºteste
        {
            for(j=0;j<caracTxt2;j++)
            {
                if(txt2[i]==txt1[j])
                {
                    match=match+1;
                }
                if(txt1[i]==txt2[j])
                {
                    match2=match2+1;
                }
            }
            if (match==0||match2==0)//para de testar - NAO ACHOU UMA LETRA
            {
                printf("\nNao sao anagramas. cod(2)");
                break;
            }
            else
            {
                match=0;
                match2=0;
                control=control+1;//controle de caracteres localizados
            }
        }
//**************************************************************
        if (control==caracTxt1)//3º teste
        {
            printf("Sao anagramas. cod(3)");
        }
         else
        {
            printf("\nNao sao anagramas. cod(4)");//Nao seria necessario...
        }

    }
}

/*
----CASOS_TESTE----
1- AMOR
2- ROMA
ANGRAMA? SAO ANAGRAMAS

1- AROMA
2- AMORA
ANGRAMA? SAO ANAGRAMAS

1- AMANDA
2- AMANDAA
ANGRAMA? NAO SAO ANAGRAMAS

1- ENAD
2- EDNA
ANGRAMA? SAO ANAGRAMAS

1- TALES
2- TALIS
ANGRAMA? NAO SAO ANAGRAMAS
*/
