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
End: 30/03/2022
Author: Tales Barbosa Rodrigues
Github: github.com/tales-br/Estudos/C
*/


//TO DO:

/*
Relembrar 
	struct (ok)
	ponteiro (ok)
	Ler artigo: https://www.ic.unicamp.br/~ra069320/PED/MC102/1s2008/Apostilas/Cap10.pdf (ok)
	
Definir quais as funções vou usar (Ok)
Layout do menu igual a da prog. estrutura? N (Novo Menu)
*/


//OBS:

	//Decidi usar a abordagem de lista encadeada, ao invés de vetores. Queria usar algo mais complexo, que poderia ser mais útil no meu aprendizado.
/*
Carta ao estimado professor(kkk):
Reli todos os slides e invariavelmente fiz pesquisas na internet.
Usei a apostila do sr. para me basear, mas mesmo assim fiquei com dúvidas de implementação (ainda mais pq não usei as biblotecas do C++ que são quase um "hack" para esse trabalho kkk).
Achei um artigo da puc rio fantástico ensinando a implementar listas encadeadas em C. Não cai na tentação de CTRL+C e CTRL+V. Li, entendi e implementei.
Segue o link: https://www.ic.unicamp.br/~ra069320/PED/MC102/1s2008/Apostilas/Cap10.pdf ((ACESSADO EM 30/03/2022))
Por favor não reduza minha nota kkkkkkk
Forte abç
*/



#include <iostream>
#include <stdlib.h>

//vontade de usar as bibliotecas de lista, fila e pilha do c++ kkKkKkK

const int Max = 10;


using namespace std;



//já define como um tipo de dado para usar no futuro
typedef struct lista
{
	
	struct lista *nxt;
	int vlr;
	int qntd_elementos;
	
}Estrutura;



//ProtÃ³tipos
Estrutura* start_estrutura (void); //tipo lista que retorna NULL (Estrutura* representa o primeiro elemento deste tipo)

Estrutura* insere_prim (Estrutura* e, int novoInteiro); //ponteiro para estrutura (que cai na primeira posicao) e aloca o espaco de uma estrutura e aponta

Estrutura* retira_prim (Estrutura* e);

Estrutura* retira_ult (Estrutura* e); 

Estrutura* pesq_retira (Estrutura* e, int v);

void mostra_estrutura (Estrutura* e);

int main()
{
	//O enunciado pediu para usar 3 estruturas diferentes... senão dava para usar uma só
	Estrutura* pilha;
	
	pilha = start_estrutura (); // vai retornar NULL para a primeira posicao
	pilha = insere_prim(pilha, 10);
	
	mostra_estrutura (pilha);
	
	return 0;
}


//retorna null para a etrutura
Estrutura* start_estrutura (void)
{
	return NULL;
}


Estrutura* insere_prim (Estrutura* e, int novoInteiro)
{
	Estrutura* novo = (Estrutura*) malloc(sizeof(Estrutura));
	
	novo->vlr = novoInteiro;
	novo->nxt = e;
	
	return novo;
}


void mostra_estrutura (Estrutura* e)
{
	Estrutura* aux;
	
	for (aux = e; aux != NULL; aux = aux->nxt) //enquanto a variavel auxiliar não achar o NULL (última posicao) ela recebe o ponteiro do prox
	{
		cout<<"vlr = "<<aux->vlr<<endl;
	}

}


Estrutura* pesq_retira (Estrutura* e, int v) 
{
	Estrutura* ant = NULL; //de cara o anterior tem que receber null para startar
	
	Estrutura* p = e; //aponta para o primeiro nó da lista (varíavel auxiliar pra percorrer)
	
	while (p != NULL && p->vlr!= v) 
	{
		ant = p;
		p = p->nxt;
	}
	
	if (p == NULL)
	{
		return e;	
	}

	
	if (ant == NULL)
	{
		
		e = p->nxt;
	
	}
	else
	{
		
		ant->nxt = p->nxt;
	
	}
	
	free(p);
	
	return e;
}

/*
	Como diria o sábio:
	Algoritmos flutua acima do bem e do mau.
*/
