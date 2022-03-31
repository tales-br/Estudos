//Problema

/*
01- Elabore um algoritmo em DEV C++ (C) que possibilite montar uma LISTA, uma
FILA e uma PILHA. O usuário escolhe que estrutura deseja montar.
IMPLEMENTAÇÃO - VETOR DE 10 POSIÇÕES DE INTEIRO.
*/



//"REQUISITOS"


	//ESPECIFICAÇÃO DAS ESTRUTURAS
	
		
		//LISTA
		
			/*
			Operações
			• Inserção - ordenada de acordo com o valor inserido
			• Exclusão - realoca os valores da LISTA após a exclusão. O usuário informa o
			valor a ser excluído.
			
			Controles
			• Inclusão - verificar se a LISTA está CHEIA
			• Exclusão - verificar se a LISTA está VAZIA ou se o elemento a ser excluído NÃO
			EXISTE na LISTA.
			*/
		
		
		//FILA
		
			/*
			Operações
			• Inserção - sempre no FINAL
			• Exclusão - sempre no TOPO
			
			Controles
			• Inclusão - verificar se a FILA está CHEIA
			• Exclusão - verificar se a FILA está VAZIA
			*/
		
		
		//PILHA
		
			/*
			Operações
			• Inserção - sempre no TOPO
			• Exclusão - sempre no TOPO
			
			Controles
			• Inclusão - verificar se a PILHA CHEIA
			• Exclusão - verificar se a PILHA está VAZIA
			*/
		
	



//INFO:

/*
Start: 29/03/2022
End: 31/03/2022
Author: Tales Barbosa Rodrigues
Github: github.com/tales-br/Estudos/C
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX 10

int fila[MAX];
int pilha[MAX];
int lista[MAX];

typedef enum opt
{
	PRIM, ULT, PESQ
}Opt;


int main ()
{
	cout<<"Alo mundo";
}
