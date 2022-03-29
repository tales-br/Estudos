/*
01- Elabore um algoritmo que leia um conjunto de 10 dados num�ricos inteiros e gere dois vetores,
o primeiro (vetor X) contendo os elementos pares e o segundo
(vetor Y) contendo os elementos �mpares.

*/

//Se pudesse teria mais um vetor com 2 dimens�es com uma flag. Acho que seria mais f�cil, mas o exerc�cio n�o dis se pode ou n�o usar um terceiro vetor.


/*
Date: 29/03/2022
Author: Tales Barbosa Rodrigues
Github: github.com/tales-br/Estudos/C
*/

/*
To do: 
Menu (OK!)
Bug vetImpar não aparece (OK!)
*/

#include <iostream>

#define Max 10 //Aloca��o din�mica



using namespace std;

void escreve_vet(int *vetPar, int*vetImpar);
void mostra_vet (int *vet);
void limpa_vet (int *vet);
int menu(int *vetPar, int *vetImpar, int *inicio);




int main()
{
    int x[Max], y[Max];
	
	menu(x, y, 0);

	return 0;
}




void escreve_vet(int *vetPar, int*vetImpar)
{
	int aux, ehPar= 0, ehImpar= 0;
	
    for (int i=0;i<Max; i++)
    {
    	cout<<"("<<i+1<<")\t"<<"Insira um valor: ";
        
		cin>>aux; //n�o coloquei uma trigger para o recebimento de valores que n�o s�o inteiros
        
		if(aux % 2 == 0 )
        {
        	vetPar[ehPar] = aux;
        	
        	ehPar++;
		}
		else
		{
        	vetImpar[ehImpar] = aux;

        	ehImpar++;
		}
    }
}

void mostra_vet (int *vet)
{
    for (int i=0;i<Max; i++)
    {

			cout<<"Vetor["<<i<<"] = "<<vet[i]<<endl;

    }
}

void limpa_vet (int *vet)
{
    for (int i=0;i<Max; i++)
    {
    	vet[i]=777;
    }
}


int menu(int *vetPar, int *vetImpar, int *inicio)
{
	
	system("cls");
	
	int option = 0;
	
	//enfeitando o pav�o kkkk
	if(inicio == 0)
	{
		cout<<"AL2 - 2022/1"<<endl;
		cout<<endl<<endl<<"Para o presente trabalho, usamos o inteiro \"777\" para ser uma referencia de vetor \"limpo\""<<endl<<endl;
		limpa_vet(vetPar);
		limpa_vet(vetImpar);
		
		inicio++;
	}

do
{
	printf("\t\t\t##MENU##\n\t1- Inserir os dados para os vetores\n\t2- Mostra os vetores\n\t3- Reiniciar\n\t4- Sair\n\nEscolha uma opcao: ");

	cin>>option;
	
	switch(option)
	{
		case 1:
			escreve_vet(vetPar, vetImpar);
			mostra_vet(vetImpar);
			
			cout<<"\n\tVetores escritos!\n";
			system("pause");
			system("cls");	
		break;
			
		case 2:
			system("cls");	
			cout<<"\n\tVetor Par:\n";
			mostra_vet(vetPar);
			
			cout<<"\n\tVetor Impar:\n";
			mostra_vet(vetImpar);
			
			system("pause");
			system("cls");
		break;
		case 3:
			limpa_vet (vetPar);
			limpa_vet (vetImpar);
			cout<<"\n\tVetores Limpos!\n";
			system("pause");
			system("cls");		
		break;
		case 4:
			limpa_vet (vetPar);
			limpa_vet (vetImpar);
			cout<<"\nSaindo\n";
			system("pause");
			system("cls");		
		break;
		default:
			cout<<"\nOpcao invalida!\n";
			system("pause");
			system("cls");	
	}
}
while(option!=4);

return 0;
}

