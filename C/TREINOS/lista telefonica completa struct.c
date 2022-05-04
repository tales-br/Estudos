* UFMA 2010.1
/* main.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

typedef struct Agenda
{
        char nome[50];
        char fone[17];
        char email[80];
}T_agenda;

// prototipos
void inclusao(void);
void Listar(void);
void quick_struct(int);
void qs_struct(int,int);
void ordenar(void);
void pesquisar(void);
char Validaresp();

static int qtd = 0;

T_agenda Tab[100];
FILE *fp;


// =================================================================
// ======Incluir dados no arquivo ==================================

void inclusao(void){
     int total = 0, retorno;
     char op = 's';

     if ((fp = fopen("agenda.db", "a")) == NULL)
     {
        printf ("O arquivo da lista não pode ser aberto!\n");
        printf ("Insira dados!\n");
        getch();
        exit(1);
     }
     while ((total < 100) && (op == 's'))
     {
           printf ("Digite o nome: ");
           gets(Tab[total].nome);
           printf ("Digite o numero: ");
           gets(Tab[total].fone);
           printf ("Digite o E-mail: ");
           gets(Tab[total].email);

           retorno = fwrite (&Tab[total], sizeof(struct Agenda) ,1,fp);

           if (retorno == 1) {
               printf(" \nGravacao ok ! ");
           }
           total++;
           op = Validaresp();
           qtd++;
     }
     fclose (fp);
}

//======================================================================
// ======Valida resposta ===============================================

char Validaresp() {
   char op;
   do {
      printf(" \nDeseja inserir novos dados? [S ou N] ? " );
      op = getch();
      printf("\n" );
   } while (op != 's' && op != 'n');
   return op;
}

//======================================================================
// ======Organizar em ordem alfabetica =================================

void ordenar(void){
      
     T_agenda vet;
     int aux,i,j,k,retorno;
     char *str, *str2, *straux;
   

         aux = qtd; // aux recebe a quantidade de contatos inscritos
         for ( i = 0 ; i < aux ; i++ ){
               str = Tab[i].nome;             
               for ( j = i+1 ; j < aux ; j++ ){
                   str2 = Tab[j].nome;
                   if ( strcmp ( str, str2 ) > 0 ){
                        vet = Tab[i];
                        Tab[i] = Tab[j];
                        Tab[j] = vet;
                   }
               }
         }
   
     remove("agenda.db");
     if ((fp = fopen("agenda.db", "w+")) == NULL){
        printf ("ERRO!\n");
        getch();
        exit(1);
     }
     for ( k = 0 ; k < aux ; k++ ){
           retorno = fwrite (&Tab[k], sizeof(struct Agenda) ,1,fp);
           if (retorno != 1) {
               printf(" \nERRO ! ");
           }
     }
     fclose(fp);
     printf("\nLista Ordenada! \n");
     getch();
}

//======================================================================
// ======Pesquisar contato pelo nome ===================================

void pesquisar(void){
     int indice = 0, retorno = 1, cont = 0;
     char nome[80],op;

     if ((fp = fopen("agenda.db", "r")) == NULL){
     printf ("O arquivo da lista não pode ser aberto!\n");
     printf ("Insira dados!\n");
     getch();
     exit(1);
     }
     printf ("Digite o nome: ");
     gets(nome);

     retorno = fread(&Tab[indice], sizeof(struct Agenda), 1, fp);

        while (retorno == 1){
            if (strcmp(nome, Tab[indice].nome) == 0 ){
            printf ("\nNome ..: %s\nFone ..: %s\nE-mail ..: %s\n", nome, Tab[indice].fone, Tab[indice].email);
            cont++;
            }
            indice++;
            retorno = fread(&Tab[indice], sizeof(struct Agenda), 1, fp);
        }
        if(cont == 0){
                     printf("Nao ha contatos com este nome!\n");
                     }
        getch();
        fclose(fp);
   }
 
//======================================================================
// ======Pesquisar Telefone ============================================

void pesquisarfone(void){
     int indice = 0, retorno = 1, cont = 0;
     char fone[80],op;

     if ((fp = fopen("agenda.db", "r")) == NULL){
     printf ("O arquivo da lista não pode ser aberto!\n");
     printf ("Insira dados!\n");
     getch();
     exit(1);
     }
     printf ("Digite o telefone: ");
     gets(fone);

     retorno = fread(&Tab[indice], sizeof(struct Agenda), 1, fp);

        while (retorno == 1){
            if (strcmp(fone, Tab[indice].fone)==0){
            printf ("\nNome ..: %s\nFone ..: %s\nE-mail ..: %s\n", Tab[indice].nome, Tab[indice].fone, Tab[indice].email);
            cont++;
            }
            indice ++;
            retorno = fread(&Tab[indice], sizeof(struct Agenda), 1, fp);
        }
        if(cont == 0){
                     printf("Nao ha contatos com este Telefone!\n");
                     }
        getch();
        fclose(fp);
   }
 
//======================================================================
// ======Pesquisar contato por Email ===================================

void pesquisaremail(void){
     int indice = 0, retorno = 1, cont =0;
     char email[80],op;

     if ((fp = fopen("agenda.db", "r")) == NULL){
     printf ("O arquivo da lista não pode ser aberto!\n");
     printf ("Insira dados!\n");
     getch();
     exit(1);
     }
     printf ("Digite o E-mail: ");
     gets(email);

     retorno = fread(&Tab[indice], sizeof(struct Agenda), 1, fp);

        while (retorno == 1){
            if (strcmp(email, Tab[indice].email)==0){
            printf ("\nNome ..: %s\nFone ..: %s\nE-mail ..: %s\n", Tab[indice].nome, Tab[indice].fone, Tab[indice].email);
            cont++;
            }
            indice ++;
            retorno = fread(&Tab[indice], sizeof(struct Agenda), 1, fp);
        }
        if(cont == 0){
                     printf("Nao ha contatos com este Email!\n");
                     }
        getch();
        fclose(fp);
   }
 
//======================================================================
// ======Lista os contatos cadastrados =================================

void Listar(void){
int i = 0, retorno;

    if ((fp = fopen("agenda.db", "r")) == NULL)
    {
    printf ("O arquivo da lista não pode ser aberto!\n");
    printf ("Insira dados!\n");
    getch();
    exit(1);
    }

    retorno = fread(&Tab[i], sizeof(struct Agenda), 1, fp);
   // fread retorna a quantidade de itens ...

   while ( retorno == 1) {
      printf("\n Nome ..: %s",   Tab[i].nome);
      printf("\n Fone ..: %s",   Tab[i].fone);
      printf("\n E-mail ..: %s\n",   Tab[i].email);
      i++;
      retorno = fread(&Tab[i], sizeof(struct Agenda), 1, fp); 
      }
      printf(" \n\n %d Contatos salvos!\n", i);
      getch();
      fclose(fp);
}

//======================================================================
// ======Menu ==========================================================

void menu(void){
char op;
int teste;

if ((fp = fopen("agenda.db", "r")) != NULL){
        qtd = 0;      
        do {
             teste = fread(&Tab, sizeof(struct Agenda), 1, fp);
             qtd++;
        }while ( teste == 1 );
        qtd--;
}

do{
system("cls");
printf("\n(1)Incluir\n(2)Listar\n(3)Ordenar por nome\n(4)Pesquisar por nome\n");
printf("(5)Pesquisar por fone\n(6)Pesquisar por E-mail\n(7)Qualquer outra tecla para sair\n\n");
op = getch();
switch(op){
case '1':
     inclusao();
break;
case '2':
     Listar();
break;
case '3':
     ordenar();
break;
case '4':
     pesquisar();
break;
case '5':
     pesquisarfone();
break;
case '6':
     pesquisaremail();
break;
default:
exit(1);
}
}while (op < '7');
}

int main (){
    int var;

    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("                  .::AGENDA ELETRONICA:.  \n\n");
    printf("  Veja todas as funcoes disponiveis no menu   \n");
    printf("  use os numeros para selecionar a opcao desejada  \n");
    printf("  pressione qualquer tecla para continuar ou ESC para sair do programa agora.");
    var=getch();
    if(var == 27){ exit(1);}
menu();
system("pause");
}
