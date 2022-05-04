#include <stdio.h>

int geravetor(int vet[], int tam, int ampl)
{
    int i;

    printf("\nVetor desordenado: \n\n");

    for (i = 0; i < tam; i++)
    {
        vet[i] = rand()%ampl;
        printf("%d ", vet[i]);
    }

    printf("\n\n");

}

int ordenavetor (int vet[], int tam)
{
    int i, j, aux;

    printf("\nVetor ordenado: \n\n");

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
        }

    for (i = 0; i < tam; i++)
        {
            printf("%d ", vet[i]);
        }
        printf("\n");
}

int busca (int vet[], int tam, int num)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        if (vet[i] == num)
        {
            printf("\nValor encontrado na posicao %d\n\n", i);
            system("pause");
            return 0;
        }
    }
    if (vet[i] != num)
        {
            printf("\nValor nao encontrado!\n\n");
            system("pause");
            return 1;
        }
}

int main()
{

    int tamanho, amplitude, numero;

    printf("Entre com o tamanho: ");
    scanf("%d", &tamanho);

    printf("Entre com a amplitude: ");
    scanf("%d", &amplitude);

    printf("Entre com o valor a ser buscado: ");
    scanf("%d", &numero);

    int vetor[tamanho];

    geravetor(vetor, tamanho, amplitude);
    ordenavetor(vetor, tamanho);
    busca (vetor, tamanho, numero);
}
