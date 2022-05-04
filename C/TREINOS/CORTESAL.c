/*[CORTESAL]
Um departamento de RH de uma empresa recebeu a dura ordem cortar todos os funcionários que ganhem mais do que 2000 mil.
O departamento possui um base de dados, armazenado em arquivo texto, com a seguinte estrutura:
ESTRUTURA DO ARQUIVO RH.TXT
Registro = { nome-funcionário + salário }
nome-funcionário * 20 caracteres * salário *
valor número, com dois dígitos decimais separados pelo caractere ponto *
CONTEÚDO DO ARQUIVO RH.TXT
MARCIO AUGUSTO      1200.02
SAULO CESAR         330.20
MARIA TEREZA        670.00
AUGUSTO CARMO       2230.90
LEANDRO SOUZA       1300.32
RICARDO MELO        780.00
LUIZA TEIXEIRA      3300.22
LEANDRO COSTA       1900.40
ISABEL CASTRO       552.23
RENATA GOMES        2700.01
AUGUSTO BOZO        4100.00
LIVIA HUMBERT       691.23
PAULA SILVA         1300.33
EDUARDO PARREIRA    2100.50
SILVIO CESAR        720.30
VANIA LIMA          4000.12
PEDRO LARA          3230.00
ALBERTO ROBERTO     530.00
ERNESTO SOUZA       1639.32
ANDREA RICHA        2332.29
WANDERLEI FERREIRA  2400.63
NUBIA OLIVA         423.09
KARLA CASTRO        3245.23
SEBASTIAO TRISTAO   2201.00
ELISABETE PERSE     920.23
GISELE BORBA        1000.28
BARBARA LIMA        777.66
ADRIANA SIMAO       4119.00
ADRIANO CERQUEIRA   2332.32
ANTONIO CARLOS      837.32
CRISTINA VAZ        323.32
OTACILIO HERMES     1486.43

Faça o programa que que gere o arquivo CORTE.TXT com o nome dos funcionário a serem cortados.
No caso do arquivo acima, o conteúdo resultante nesse arquivo seria:
(((CASOS_TESTE)))
AUGUSTO CARMO
LUIZA TEIXEIRA
RENATA GOMES
AUGUSTO BOZO
EDUARDO PARREIRA
VANIA LIMA
PEDRO LARA
ANDREA RICHA
WANDERLEI FERREIRA
KARLA CASTRO
SEBASTIAO TRISTAO
ADRIANA SIMAO
ADRIANO CERQUEIRA
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MX_STR 30

int main()
{
    FILE *lerArq;
    FILE *gravarArq;
    int i=0,j=0;
    float salario=0,corte=2000.00;
    char linha[MX_STR],strTemp[MX_STR],novaLinha[2]="\n";

    lerArq=fopen("RH.txt","rt");
    gravarArq=fopen("CORTE.txt","at");

    while(fgets(linha,sizeof(linha),lerArq)!=NULL)
    {
        j=0;
        strcpy(strTemp,"");
        for (i=20;i<=strlen(linha);i++)
        {
            strTemp[j]=linha[i];
            j=j+1;

        }
        salario=atof(strTemp);

        strcpy(strTemp,"");
        if(salario>corte)
        {
            strncat(strTemp,linha,20);
            strcat(strTemp,novaLinha);
            fputs(strTemp,gravarArq);
        }
    }

    fclose(lerArq);
    fclose(gravarArq);
    return 0;
}
