/*
02- Elabore um algoritmo que leia um conjunto de 10 dados numéricos e gere dois vetores,
o primeiro (vetor X) com os elementos de ordem par, e o segundo (vetor Y) com os elementos de ordem ímpar.
*/

/*
Date: 29/03/2022
Author: Tales Barbosa Rodrigues
Github: github.com/tales-br/Estudos/C
*/

/*
To do: 
*/

#include <iostream>

#define Max 10



using namespace std;

void escreve_vet(float *vetPar, float*vetImpar);
void mostra_vet (float *vet);
void limpa_vet (float *vet);
int menu(float *vetPar, float *vetImpar, int *inicio);




int main()
{
    float x[Max], y[Max];
	
	menu(x, y, 0);

	return 0;
}




void escreve_vet(float *vetPar, float*vetImpar)
{
	float aux;
	int ehPar= 0, ehImpar= 0;
	
    for (int i=0;i<Max; i++)
    {
    	cout<<"("<<i+1<<")\t"<<"Insira um valor: ";
        
		cin>>aux;
        
		if(i % 2 == 0 )
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

void mostra_vet (float *vet)
{
    for (int i=0;i<Max; i++)
    {

			cout<<"Vetor["<<i<<"] = "<<vet[i]<<endl;

    }
}

void limpa_vet (float *vet)
{
    for (int i=0;i<Max; i++)
    {
    	vet[i]=777;
    }
}


int menu(float *vetPar, float *vetImpar, int *inicio)
{
	
	system("cls");
	
	int option = 0;
	
	if(inicio == 0)
	{
		cout<<"QUESTAO 2)\tAL2 - 2022/1"<<endl;
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

