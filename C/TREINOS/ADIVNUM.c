/*[ADIVNUM]
O jogo com dois participantes que devem adivinhar um número sorteado de 1 a 1000.
A cada turno, um jogador tem a chance de tentar adivinhar o número.
Ao errar o palpite, o computador indica se o número secreto é maior ou menor e passa a vez para o oponente.
Seu programa deverá perguntar o nome dos dois jogadores e sortear um deles para iniciar o jogo.
Abaixo o exemplo de um jogo. Em negrito o que é fornecido como entrada pelo console para o programa.

Jogador 1: Ana
Jogador 2: Pedro
Jogador sorteado para comecar: Ana
Palpite Ana: 300
Computador: numero eh maior
Palpite Pedro: 700
Computador: numero eh maior
Palpite Ana: 600
Computador: numero eh maior Palpite
Pedro: 800
Computador: numero eh menor
Palpite Ana: 750
Computador: numero eh maior
Palpite Pedro: 755
Computador: numero eh menor
Palpite Ana: 751
Computador: Ana ganhou!
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int numSorte=0,num=0,escape=0;

//FUNCAO *******************************************************
int Jogada (char PLAYER[51])
 {
     printf("\nJogador %s, faca sua jogada: ",PLAYER);
     scanf("%d",&num);

     if(num==numSorte)
     {
         printf("\nParabens Jogador %s voce ganhou!",PLAYER);
         escape=1;
         return 1;
     }
     else
    {
        if (num>numSorte)
        {
            printf("\nO numero digitado eh maior.\n");
        }
        else
        {
            printf("\nO numero digitado eh menor.\n");
        }
    }
    return 0;
 }

//********************************************************************

int main()
{
    int sorteioP1=0, sorteioP2=0;
    char PLAYER1[51], PLAYER2[51];

    srand(time(NULL));
    numSorte= 1+(rand()%1000);
    printf("Numero da sorte:%d\n",numSorte);

    sorteioP1= 1+(rand()%10);//o rand vai de 0-9 com +1 vai de 1-10
    while(sorteioP1==sorteioP2)
        {
            sorteioP2= 1+(rand()%10);
        }

    printf("NICKNAME para o Jogador 1(MAX 50 caracteres):");
    gets(PLAYER1);

    printf("NICKNAME para o Jogador 2(MAX 50 caracteres):");
    gets(PLAYER2);

    do
    {
        if(sorteioP1>sorteioP2)
        {
            Jogada(PLAYER1);
            if (escape){break;}
            else
            {
            Jogada(PLAYER2);
            if (escape){break;}
            }
        }
        else
        {
            Jogada(PLAYER2);
            if (escape){break;}
            else
            {
            Jogada(PLAYER1);
            if (escape){break;}
            }
        }

    }while(escape==0);
    return 0;
}
