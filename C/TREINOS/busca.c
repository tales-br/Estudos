#include <stdio.h>

int geravetor(int vet[], int tam, int ampl)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        vet[i] = rand()%ampl;
        printf("%d ", vet[i]);
    }
printf("\n");
}

int buscavalor(int vet[], int tam, int ampl, int num)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        if (vet[i] == num)
        {
            printf("Valor encontrado em %d\n\n", i);
            system("pause");
            return 0;
        }
        else
        {
            printf("O valor %d nao foi encontrado no vetor...\n\n", num);
            system("pause");
            return 0;
        }
    }

}

int main()
{

    int tamanho, amplitude, numero;

    printf("Entre com o tamanho: ");
    scanf("%d", &tamanho);

    printf("Entre com a amplitude: ");
    scanf("%d", &amplitude);

    printf("Entre com o valor a ser buscado:");
    scanf("%d", &numero);

    int vetor[tamanho];

    geravetor(vetor, tamanho, amplitude);
    buscavalor(vetor, tamanho, amplitude, numero);

}
