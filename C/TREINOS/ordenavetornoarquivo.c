#include <stdio.h>

int ordenavetor (int vet[], int tam)
{
    int i, j, aux;

    FILE *vetordesordenado;
    vetordesordenado = fopen("vetor.txt", "r"); //abre o arquivo

    //FILE *vetorordenado;
    //vetorordenado = fopen("vetorordenado.txt", "w");

    if (vetordesordenado == NULL)
    {
        printf("Arquivo não pode ser lido!");
        system("pause");
        return 0;
    }
    for (i = 0; i < tam; i++)
    {
        fscanf(vetordesordenado, "%d", &vet[i]); //lê o arquivo
        printf("%d ", vet[i]); //exibe conteudo do arquivo
    }
    printf("\n");

    for( i=0; i<tam; i++ )
        {
            for( j=i+1; j<tam; j++ )
            {
                if( vet[i] > vet[j] )
                {
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
            //fprintf(vetorordenado, "%d ", vet[i]);
        }


        //fclose(vetorordenado);
        fclose(vetordesordenado);
}

int main()
{

    int tamanho;

    printf("Entre com o tamanho: ");
    scanf("%d", &tamanho);

    printf("\n");

    int vetor[tamanho];

    ordenavetor(vetor, tamanho);

}
