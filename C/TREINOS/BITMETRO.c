/*
Unitario=2,30
Duplo=4,60
dezViag=23,0
*/
#include<stdio.h>


int main()
{
    float valor=0, troco=0, vlrUnit=2.30;
    int menu=0,qntBilhete=0;

    printf("Insira o valor fornecido pelo cliente:");
    scanf("%f",&valor);
    printf("Insira o tipo de bilhete (1- Unitario 2-Duplo 3- Dez viagens):");
    scanf("%d",&menu);

    switch (menu)
    {
    case 1:
        if(valor<vlrUnit)
        {
            printf("Valor insuficiente!!!");
        }
        else
        {
        qntBilhete= (int)(valor /vlrUnit);
        troco= valor-qntBilhete* vlrUnit;
        }
        break;
    case 2:
        if(valor<vlrUnit*2)
        {
            printf("Valor insuficiente!!!");
        }
        else
        {
        qntBilhete= (int)(valor / (vlrUnit*2));
        troco= valor-qntBilhete* (vlrUnit*2);
        }
        break;
    case 3:
        if(valor<vlrUnit*10)
        {
            printf("Valor insuficiente!!!");
        }
        else
            {
        qntBilhete= valor / (vlrUnit*10);
        troco= (int)(valor-qntBilhete* (vlrUnit*10));
            }
        break;
        default:
            printf("Opcao invalida!");
    }
    printf("\nQuantidade de bilhete(s): %d",qntBilhete);
    printf("\nTroco: R$%.2f",troco);
}
