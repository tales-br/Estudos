//Problema

/*
01- Elabore um algoritmo em DEV C++ (C) que possibilite montar uma LISTA, uma
FILA e uma PILHA. O usu�rio escolhe que estrutura deseja montar.
IMPLEMENTA��O - VETOR DE 10 POSI��ES DE INTEIRO.
*/



//"REQUISITOS"


	//ESPECIFICA��O DAS ESTRUTURAS
	
		
		//LISTA
		
			/*
			Opera��es
			� Inser��o - ordenada de acordo com o valor inserido
			� Exclus�o - realoca os valores da LISTA ap�s a exclus�o. O usu�rio informa o
			valor a ser exclu�do.
			
			Controles
			� Inclus�o - verificar se a LISTA est� CHEIA
			� Exclus�o - verificar se a LISTA est� VAZIA ou se o elemento a ser exclu�do N�O
			EXISTE na LISTA.
			*/
		
		
		//FILA
		
			/*
			Opera��es
			� Inser��o - sempre no FINAL
			� Exclus�o - sempre no TOPO
			
			Controles
			� Inclus�o - verificar se a FILA est� CHEIA
			� Exclus�o - verificar se a FILA est� VAZIA
			*/
		
		
		//PILHA
		
			/*
			Opera��es
			� Inser��o - sempre no TOPO
			� Exclus�o - sempre no TOPO
			
			Controles
			� Inclus�o - verificar se a PILHA CHEIA
			� Exclus�o - verificar se a PILHA est� VAZIA
			*/
		
	



//INFO:

/*
Date: 01/04/2022
Author: Tales Barbosa Rodrigues
Github: github.com/tales-br/Estudos/C
*/

#include <iostream>

using namespace std;

#define MAX 10

//Globais
int fila[MAX];
int flagFila = 0;

int pilha[MAX];
int flagPilha = 0;

int lista[MAX];
int flagLista = 0;

int start = 0;

typedef enum opt
{
	PRIM, ULT, ORD
}Opt;

//Protótipos
void mostra (int *estrutura, int flag); //1 - ok
void insere (int *estrutura, int dado, int *flag, Opt x); //4 - ok
void retira (int *estrutura, int dado, int *flag, Opt x);
void ordena (int *estrutura, int flag); //3 - ok
void limpa (int *estrutura, int *flag); //2 - ok


int main ()
{
	cout<<"QUESTAO 1)\tAL2 - 2022/1"<<endl;
	cout<<endl<<endl<<"Para o presente trabalho, usei NULL \"0\" para ser uma referencia de estrutura \"limpa\""<<endl<<endl;
	getch();
	
	limpa (pilha, &flagPilha);
	insere (pilha, 1, &flagPilha, PRIM);
	insere (pilha, 2, &flagPilha, PRIM);
	insere (pilha, 3, &flagPilha, PRIM);
	mostra (pilha, flagPilha);
/*
	cout<<endl;
	insere (pilha, 4, &flagPilha, ULT);
	
	mostra (pilha, flagPilha);

	cout<<endl;
	insere (pilha, 0, &flagPilha, ORD);
	insere (pilha, 5, &flagPilha, ULT);
	mostra (pilha, flagPilha);
	cout<<endl;
	retira (pilha, 0, &flagPilha, PRIM);
	retira (pilha, 0, &flagPilha, ULT);
*/
	retira (pilha, 2, &flagPilha, ORD);
	retira (pilha, 20, &flagPilha, ORD);

	//retira (pilha, 200, &flagPilha, ORD);
	mostra (pilha, flagPilha);

	cout<<flagPilha;

	system("pause");

	return 0;
}


void insere (int *estrutura, int dado, int *flag, Opt x)
{
	int aux;

	if(*flag == MAX)
	{
		cout<<"\n\t\tEstrutura cheia!"; //não deveria tratar a expception aqui (eu acho)... seria legar ter o CR nesse caso.. mas n tive tempo de implementar
	}
	else
	{
		if(*flag == 0)
		{
			estrutura[0] = dado;
		}
		else
		{
			switch (x)
			{	//podia ter colocado outra funcao e diminuir o cod aqui
				case PRIM:
					for(int i = *flag; i >= 0; i--)
					{
						estrutura[i] = estrutura[i-1];
					}
					estrutura[0] = dado;
					break;
							
				case ORD:
					for(int i = *flag; i >= 0; i--)
					{

						estrutura[i] = estrutura[i-1];

					}
					estrutura[0] = dado;
					ordena(estrutura, *flag+1);
					break;

				case ULT:
					estrutura[*flag] = dado;
					break;
				
				default:
					break;
			}
		}

		*flag = *flag + 1;
	}
}


void limpa (int *estrutura, int *flag)
{
	*flag = 0;

    for (int i=0; i < MAX; i++)
    {
    	estrutura[i]=NULL;//dá no mesmo que zero =s
    }

}


void mostra (int *estrutura, int flag)
{
	if(flag == 0)
	{

		cout<<"\n\t\tEstrutura Vazia!";

	}
	else
	{

    for (int i=0; i <= flag-1; i++)
    {

			cout<<"["<<i+1<<"] = "<<estrutura[i]<<endl;

    }

	}
	cout<<endl;
}


//bbl srt a duras penas
void ordena (int *estrutura, int flag)

{
	int i, j, aux;


	for(j=flag-1; j>=1; j--)
  	{ 
    for(i=0; i<j; i++)
    { 
      if(estrutura[i] > estrutura[i+1])
      { 
        aux = estrutura[i]; 
        estrutura[i] = estrutura[i+1]; 
        estrutura[i+1] = aux; 
      }
    }
  } 
}


void retira (int *estrutura, int dado, int *flag, Opt x)
{
	int aux;
	int j = 0;

	if(*flag == 0)
	{
		cout<<"\n\t\tEstrutura vazia!"; //não deveria tratar a expception aqui (eu acho)... seria legar ter o CR nesse caso.. mas n tive tempo de implementar
	}
	else
	{
			switch (x)
			{	//podia ter colocado outra funcao e diminuir o cod aqui
				case PRIM:

					for(int i = 0; i <= *flag; i++)
					{
						estrutura[i] = estrutura[i+1];
					}

					estrutura[*flag] = NULL;
					break;
							
				//uma questão aqui... estou sempre indo de trás para frente... dependendo da estrutura, posso acabar tirando o valor digitado mais recente (caso tenha outro dado igual)
				case ORD:

					for(int i = *flag; i >= 0; i--)
					{
						if(estrutura[i]==dado)
						{
							j++;

							for(aux = i; aux <= *flag; aux++)
							{
								estrutura[aux] = estrutura[aux+1];
							}

							break;
						}
					}

					estrutura[*flag] = NULL;
					break;

				case ULT:
					estrutura[*flag] = NULL;
					break;
				
				default:
					break;
			}
		

		if(j==0)
		{
			cout<<"\t\tValor nao encontrado!\n";
		}
		else
		{
			*flag = *flag - 1;
		}
	}
}


int menu()
{
	int option = 0, tipo = 0;	

	system("cls");
	
	do
	{
		printf("\t\t\t##MENU##\n\t1- Lista\n\t2- Fila\n\t3- Pilha\n\t4- Sair\n\nEscolha uma opcao: ");

		cin>>tipo;
		
		do{
			if(tipo>4 || tipo<1)
			{
			cout<<"\t\t\tOpcao invalida!\n";
			system("pause");
			system("cls");		
			break;
			}

			printf("\t\t\t##MENU##\n\t1- Inserir elemento\n\t2- Remover\n\t3- Mostrar\n\t4- Sair\n\nEscolha uma opcao: ");

			cin>>option;

			switch(option)
			{
				case 1:

					cout<<"\t\tInforme o valor para insercao:\n";

					cin>>num;

					cout<<endl;

					if(tipo == 1)
					{
						insere (lista, num, &flagLista, ORD);
						mostra(lista, flagLista);
					}
					if(tipo == 2)
					{
						insere (fila, num, &flagFila, ULT);
						mostra(lista, flagFila);
					}
					if(tipo == 3)
					{
						insere (pilha, num, &flagPilha, PRIM);
						mostra(pilha, flagPilha);
					}
					
					cout<<"\n\tValor inserido!\n";
				break;
					
				case 2:

					cout<<"\t\tRemocao:\n";

					if(tipo == 1)
					{
						cout<<"\t\tQual valor deseja remover?\n";

						cin>>num;

						retira (lista, num, &flagLista, ORD);

						cout<<"\n\t\tSua lista:\n";
						mostra(lista, flagLista);
					}
					if(tipo == 2)
					{
						retira (fila, num, &flagFila, PRIM);

						cout<<"\n\t\tSua fila:\n";
						mostra(lista, flagFila);
					}
					if(tipo == 3)
					{
						retira (pilha, num, &flagPilha, PRIM);

						cout<<"\n\t\tSua pilha:\n";
						mostra(pilha, flagPilha);
					}
					
					cout<<"\n\tValor inserido!\n";
				break;
				case 3:
					if(tipo == 1)
						cout<<"\n\t\tSua lista:\n";
						mostra(lista, flagLista);
					}
					if(tipo == 2)
					{
						cout<<"\n\t\tSua fila:\n";
						mostra(lista, flagFila);
					}
					if(tipo == 3)
					{
						cout<<"\n\t\tSua pilha:\n";
						mostra(pilha, flagPilha);
					}
				break;
				case 4:
					cout<<"\nRetornando\n";
					system("pause");
					system("cls");		
				break;
				default:
					cout<<"\nOpcao invalida!\n";
					system("pause");
					system("cls");	
			}

			system("pause");
			system("cls");

		}while(option!=4);
	}
	while(option!=4);

return 0;
}