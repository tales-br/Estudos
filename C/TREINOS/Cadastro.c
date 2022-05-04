
/* 			-----------------------------PROPOSTA[1]-----------------------------
Criar um algoritmo para criar uma struct vetorial que armazene: NOME, IDADE e NOTA em um arquivo. 
Depois imprima estas informações em tela.
*/

/* 			-----------------------------PROPOSTA[2]-----------------------------
Proteger os arquivos gerados por este algoritmo com criptografia 

			-----------------------------IDEIA-----------------------------
				Usar a tabela ascii: usar uma chave de criptografia para embaralhar as strings (faria uma operacao matematica com elas)
				Usar um numero real: usar um numero real para multiplicar (ou dividir) as entradas que são números, variando o numero de criptografia dependendo do numero de ID do registro (ex: ID's pares-> multiplicam por 123 / ID's impares-> divide por 321)
			Essas 2 partes serem salvas em uma string/vetor/struct chamada chaveCript=>"chave de criptografica" e armazenaria essas 2 informações (ex: chaveCript="1233219" => 123 e 321 referem-se a informação com numeros e o 9 a parte de caracteres)
*/

#include <stdio.h>
#include <string.h>
#define Max_TXT 55 


//prototipos
void RdCadastro();
void DoCadastro(int x);
int opcao(void);

//variaveis globais
int QntdReg;
int Quit=0;
	
FILE *Arq;
FILE *ArqRange;
	
char Ext[]=".tbr";//Pra na hora de dar "type *.extensao" aparecer so os arquivos que o programa gerou (e pq é meu nome kkkk)
char nomeUltReg[]="range.utr";
	
	typedef struct {
		char nome[Max_TXT];
		int idade;
		float nota;
	}Cadastro;

int main(void)
{
	int numStart=0;
	
	system("echo off");
	system("title CADASTRO");

/*	
	//sempre verifica se existe o range.utr e inclui valor 0 dentro dele, se caso nao localize o arquivo ele o cria (com entrada 0)
	
	ArqRange=fopen(nomeUltReg,"w");
	if(ArqRange==NULL)
	{
		
		fprintf(ArqRange,"%d",numStart);
	}
	fclose(ArqRange);
*/

	if (Quit==0)
	{
		opcao();
	}
}

	void RdCadastro ()
	{
		int menuConsulta;
		char nomeConsulta [Max_TXT];
		char Line [Max_TXT];
		//char TempLine [Max_TXT];
		int Quit=0;
		
		system("cls");
		
		printf("1-Consultar todos os arquivos\n2-Consultar por nome\n3-Voltar\n");
		scanf("%d",&menuConsulta);
		
		switch (menuConsulta)
		{
		case 1:
			system("cls");
			system("type *.tbr");
			system("pause");
			RdCadastro ();
			break;
		case 2:
				fflush(stdin);
				printf("Digite o nome que deseja consultar: ");
				scanf("%54[^\n]",&nomeConsulta);
				//gets(nomeConsulta);
				strcat(nomeConsulta,Ext);
				//system("pause");
				Arq=fopen(nomeConsulta,"rt");

			do{
				if (Arq==NULL)
				{
					fclose(Arq);
					printf("\nNome nao localizado.\nPara voltar tecle '1': ");
					scanf("%d",&Quit);
					
					if(Quit==1){RdCadastro();}
					system("cls");
				}
				else
				{
					while(fgets(Line,sizeof(Line),Arq)!=NULL)
					{
						printf("%s",Line);
					}
					fclose(Arq);
				}
			}while(feof(Arq));
			getch();
			RdCadastro();
			break;
		case 3:
			system("cls");
			opcao();
			break;
		default:
			printf("Opcao invalida. Tecle Qualquer tecla para continuar.");
			getch();
			RdCadastro();
			break;
		}
	}
	
	void DoCadastro (int x)
	{
    	Cadastro Registro[x];
		int i;
		char Nome[Max_TXT];
		int ultimoReg;
		
		//pega a quantidade ja cadastrada
		ArqRange=fopen(nomeUltReg,"rt");
		fscanf(ArqRange,"%d",&ultimoReg);
		fclose(ArqRange);
		system("cls");
		
		for (i=0;i<x;++i)
		{
			
			fflush(stdin);//zera o buffer do standard in (teclado)
			
			printf("******CADASTRO[%d]******\n",i);
			
			printf("Insira o NOME: ");
			scanf("%54[^\n]", Registro[i].nome); //numero inteiro identifica a qntd de caracteres e o ^\n diz para funcao scanf para aceitar tudo menos a quebra de linha
			
			fflush(stdin);
			printf("Insira a IDADE: ");
			scanf("%d",&Registro[i].idade);
			
			fflush(stdin);
			printf("Insira a NOTA: ");
			scanf("%f",&Registro[i].nota);
			
			//primeiro copia o Registro.nome dentro da variavel 'nome' & depois concatena o conteudo com variavel 'Ext'=".dat"
			strcpy(Nome,Registro[i].nome);
			strcat(Nome,Ext);
			
			//cria o arquivo
			Arq=fopen(Nome,"wt");
			
			ultimoReg=ultimoReg+1;
			
			fprintf(Arq,"ID:[%d]\n",ultimoReg);
			fprintf(Arq,"NOME: %s\n",Registro[i].nome);
			fprintf(Arq,"IDADE: %i\n",Registro[i].idade);
			fprintf(Arq,"NOTA: %.2f\n",Registro[i].nota);
			fclose(Arq);	
			
			//salva o numero do ultimo registro
			ArqRange=fopen(nomeUltReg,"wt");
			fprintf(ArqRange,"%d",ultimoReg);
			fclose(ArqRange);
			system("cls");
		}
	opcao();
	}
	
	int opcao(void)
	{
	int menu;
	
	system("cls");
	
	printf("*****MENU*****\n1-Criar Cadastro(s)\n2-Ler Cadastro(s)\n3-Sair\n");
	scanf("%d",&menu);
	switch (menu)
	{
		case 1:
			printf("Insira a quantidade de registros que deseja incluir:");
			scanf("%d",&QntdReg);
			DoCadastro(QntdReg);
			break;
		case 2:
			RdCadastro();
			break;
		case 3:
			//ouuuuuu a funcao retornar um numero pra main tratar... mas deixa assim msm
			Quit=1;
			break;
		default:
			printf("Opcao Invalida\n");
			system("pause");
			system("cls");
			opcao();
	}
}
	
