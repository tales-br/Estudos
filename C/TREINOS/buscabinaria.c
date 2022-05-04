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

int buscabinaria (int vet[], int num, int p, int u)
{
    int aux;

    if (p <= u) // p = primeira posicao u = ultima posicao
    {
        aux = (p + u)/2;
        {
            if (vet[aux] == num)
            {
                return aux;
            }
            else
            {
                if (vet[aux] > num)
                {
                    buscabinaria (vet, num, p, aux-1);
                }
                else
                {
                    buscabinaria (vet, num, aux+1, u);
                }
            }

        }
    }

    else
        return -1;
}

int main()
{

    int tamanho, amplitude, numero, ultimo;

    printf("Entre com o tamanho: ");
    scanf("%d", &tamanho);

    printf("Entre com a amplitude: ");
    scanf("%d", &amplitude);

    printf("Entre com o valor a ser buscado: ");
    scanf("%d", &numero);

    ultimo = tamanho -1;

    int vetor[tamanho];

    geravetor(vetor, tamanho, amplitude);
    ordenavetor(vetor, tamanho);
    buscabinaria (vetor, numero, 0, ultimo);
}
