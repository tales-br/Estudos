#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct obs
    {
    	char coment[100];
	};
	
    struct niver
    {
    	char dia[3];
    	char mes[10];
    	char ano[5];
	};
    
    struct phone
    {
    	char ddd[5];
    	char num[15];
	};
	
	struct address
    {
    	char rua[50];
    	char numero[6];
    	char complemento[50];
    	char bairro[30];
    	char cep[10];
    	char cidade[30];
    	char estado[30];
    	char pais[30];
	};
	
	   
    struct agenda
    {
        char nome[50];
        char email[50];
		struct address endereco; 
		struct phone telefone;
		struct niver aniversario;
		struct obs observacao;
    }; 
    
    struct agenda pessoa[1]; 

int inserir();
void menu(void);
int busca_mes();
int busca_Dia_mes();
int busca_nome();
void resumido();
void completo();
/*int remover();*/

int main ()
{ 
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("                  .::AGENDA TELEFONICA:.  \n\n");
    printf("  Veja todas as funcoes disponiveis no menu   \n");
    printf("  Use os numeros para selecionar a opcao desejada  \n");
    printf("  Pressione 8 para sair do programa agora.");
	
	menu();
	system("pause");
}

void menu(void)
{
	//system ("clear");
	
	int opcao;
	
	printf("\n\n                  .::MENU::.  \n\n");
	printf("Entre com a opcao desejada:\n\n1 - Inserir contato\n2 - Remover contato\n3 - Buscar contato pelo Nome\n4 - Buscar contato pelo Mes de Aniversario\n5 - Buscar contato pelo Dia e Mes de Aniversario\n6 - Imprimir agenda Resumida\n7 - Imprimir agenda Completa\n8 - Para sair\n");
	scanf ("%d", &opcao);
	

	switch (opcao)
	{
		case 1:
			inserir();
			break;
		
		case 2:
			//remover();
			break;
			
		case 3:
			busca_nome();
			break;
			
		case 4:
			busca_mes();
			break;
			
		case 5:
			busca_Dia_mes();
			break;
			
		case 6:
			resumido();
			break;
			
		case 7:
			completo();
			break;
		
		default:
			getch();
			exit(0);	
	}	
}

int inserir(void)
{
	int i, j;
    
  //struct agenda pessoa[1]; //mudar para 100
   
  //entrada de dados
  for (i = 0; i < 1; i++)
  {
    printf("\n---------- Inserir Contato -----------\n\n");
    
    printf("\nDados Basicos......:\n\n");
    
    printf("Nome da pessoa: ");
    fflush(stdin);
    fgets(pessoa[i].nome, 40, stdin);
   
    printf("Entre com o email: ");
    fflush(stdin); 
    fgets(pessoa[i].email, 40, stdin);
    
    
    printf("\nEndereco do Contato......:\n\n");
    
    printf("Entre com o nome da rua: ");
    fflush(stdin);
    fgets(pessoa[i].endereco.rua, 50, stdin);
    
    printf("Entre com o numero da casa: ");
    fflush(stdin);
    fgets(pessoa[i].endereco.numero, 6, stdin);
    
    printf("Entre com o complemento: ");
    fflush(stdin);
    fgets(pessoa[i].endereco.complemento, 50, stdin);
    
    printf("Entre com o bairro: ");
    fflush(stdin);
    fgets(pessoa[i].endereco.bairro, 30, stdin);
    
    printf("Entre com o numero do CEP: ");
    fflush(stdin);
    fgets(pessoa[i].endereco.cep, 10, stdin);
    
    printf("Entre com a Cidade: ");
    fflush(stdin);
    fgets(pessoa[i].endereco.cidade, 30, stdin);
    
    printf("Entre com o Estado: ");
    fflush(stdin);
    fgets(pessoa[i].endereco.estado, 30, stdin);
    
    printf("Entre com o Pais: ");
    fflush(stdin);
    fgets(pessoa[i].endereco.pais, 30, stdin);
    
    printf("\nTelefone.....:\n\n");

    printf("Entre com o DDD: ");
    fflush(stdin);
    fgets(pessoa[i].telefone.ddd, 5, stdin);
    
    printf("Entre com o nunero do telefone: ");
    fflush(stdin);
    fgets(pessoa[i].telefone.num, 15, stdin);
    
    printf("\nAniversario.....:\n\n");
    
    printf("Entre com o dia: ");
    fflush(stdin);
    fgets(pessoa[i].aniversario.dia, 3, stdin);
    
    printf("Entre com o mes: ");
    fflush(stdin);
    fgets(pessoa[i].aniversario.mes, 10, stdin);
    
    printf("Entre com o ano: ");
    fflush(stdin);
    fgets(pessoa[i].aniversario.ano, 5, stdin);
    
    printf("\nObservacao.....:\n\n");
    
    printf("Entre com uma breve observacao: ");
    fflush(stdin);
    fgets(pessoa[i].observacao.coment, 100, stdin);
    
}
menu();
}

void completo(void)
{
	int i;
	
	for (i = 0; i < 1; i++)
    {
        printf("\n\n --------- Lendo os dados da Completos ---------\n\n");
   		
   		printf ("\n-Basico-\n\n");
        printf("Nome: %s", pessoa[i].nome);
        printf("Email: %s", pessoa[i].email);        
        
        printf ("\n-Endereco-\n\n");
        printf("Rua: %s" , pessoa[i].endereco.rua);
        printf("Num: %s" , pessoa[i].endereco.numero);
        printf("Complemento: %s" , pessoa[i].endereco.complemento);
        printf("Bairro: %s" , pessoa[i].endereco.bairro);
        printf("CEP: %s" , pessoa[i].endereco.cep);
        printf("Cidade: %s" , pessoa[i].endereco.cidade);
        printf("Estado: %s" , pessoa[i].endereco.estado);
        printf("Pais: %s" , pessoa[i].endereco.pais); 
        
		printf ("\n-Contato e Aniversario-\n\n");       
        printf("Telefone: %s %s", pessoa[i].telefone.ddd, pessoa[i].telefone.num);
        printf("Aniversario: %s/%s/%s\n", pessoa[i].aniversario.dia, pessoa[i].aniversario.mes, pessoa[i].aniversario.ano);
    	printf("Observacao.....: %s\n\n", pessoa[i].observacao.coment);
        
    }
    getch();
    menu();
} 

void resumido(void)
{
	int i;
	
	for (i = 0; i < 1; i++)
    {
        printf("\n\n --------- Dados Resumidos da Agenda ---------\n\n");
   		
        printf("Nome: %s", pessoa[i].nome);
        printf("Telefone: %s %s", pessoa[i].telefone.ddd, pessoa[i].telefone.num);
        printf("Email: %s", pessoa[i].email);
	}
	getch();
    menu();
}

int busca_nome()
{
	int i;
	char contato[20];
	
	printf("Entre com o primeiro nome do contato a ser buscado: \n");
	fflush(stdin);
	fgets(contato, 20, stdin);
	
	for (i = 0; i < 1; i++)
    {
    	if(strcmp(contato, pessoa[i].nome) == 0)
    	{
    		printf("\nContato encontrado!\n");
		}
		else
		{
			printf("\nNao localizado!!!!\n");
		}
	}	
	
	getch();
	menu();
}

int busca_mes()
{
	int i;
	char meses[10];
	
	printf("Entre com o mes de aniversario do contato a ser buscado: \n");
	fflush(stdin);
	fgets(meses, 10, stdin);
	
	for (i = 0; i < 1; i++)
    {
    	if(strcmp(meses, pessoa[i].aniversario.mes) == 0)
    	{
    		printf("\nContato encontrado!\n");
		}
		else
		{
			printf("\nNao localizado!!!!\n");
		}
	}	
	
	getch();
	menu();
}
int busca_Dia_mes()
{
	int i;
	char meses[10];
	char dias[3];
	
	printf("Entre com o dia de aniversario do contato a ser buscado: \n");
	fflush(stdin);
	fgets(dias, 3, stdin);
	
	printf("Entre com o mes de aniversario do contato a ser buscado: \n");
	fflush(stdin);
	fgets(meses, 10, stdin);
	
	for (i = 0; i < 1; i++)
    {
    	if((strcmp(meses, pessoa[i].aniversario.mes) == 0) && (strcmp(dias, pessoa[i].aniversario.dia) == 0))
    	{
    		printf("\nContato encontrado!\n");
		}
		else
		{
			printf("\nNao localizado!!!!\n");
		}
	}	
	
	getch();
	menu();
}


 /*
  
  //ordena
    for(i = 0; i < 5; i++)
	{
        for (j = i + 1; j < 5; j++)
		{                       
            if(strcmp(amigo[i].nome, amigo[j].nome) > 0)
			{
                strcpy(aux, amigo[i].nome);
                strcpy(amigo[i].nome, amigo[j].nome);
                strcpy(amigo[j].nome, aux);
                
                strcpy(aux2, amigo[i].email);
                strcpy(amigo[i].email, amigo[j].email);
                strcpy(amigo[j].email, aux2);
                
                strcpy(aux3, amigo[i].telefone);
                strcpy(amigo[i].telefone, amigo[j].telefone);
                strcpy(amigo[j].telefone, aux3);
			}                               
        }      
    }
    */
