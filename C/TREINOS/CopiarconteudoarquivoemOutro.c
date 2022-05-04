#include <stdio.h>

int main()
{
    int tamanho; //o tamanho é 20

    printf("Entre com o tamanho: ");
    scanf("%d", &tamanho); //o tamanho é 20

    printf("\n");

    int vetor[tamanho];

    FILE *vetor1;
    vetor1 = fopen("vetor1.txt", "r"); //abre o arquivo

    if (vetor == NULL)
    {
        printf("Nao foi possivel abrir o arquivo!");
        return 0;
    }

    FILE *vetor2;
    vetor2 = fopen("vetor2.txt", "w"); //cria o novo arquivo

    copiaconteudo (vetor, tamanho, vetor1, vetor2);

    fclose(vetor1);
    fclose(vetor2);

}

int copiaconteudo (int vet[], int tam ,FILE *vetor1, FILE *vetor2)
{
    int i, j, aux;

    for (i = 0; i < tam; i++)
    {
        fscanf(vetor1, "%d", &vet[i]); //le o arquivo
        printf("%d ", vet[i]);
    }

    printf("\n");

    for (i = 0; i < tam; i++)
    {
        {
            for( j=i+1; j<tam; j++ )
            {
                if( vet[i] > vet[j] ) //ordena o arquivo
                {
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
        }
    }
    for (i = 0; i < tam; i++) //cria e escreve no arquivo novo
    {
        fprintf(vetor2, "%d ", vet[i]);
    }

    printf("\n");

    for (i = 0; i < tam; i++) //printa na tela o vetor ordenado tirado do novo arquivo
    {
        fscanf(vetor2, "%d", &vet[i]);
        printf("%d ", vet[i]);
    }

    printf("\n");

}


