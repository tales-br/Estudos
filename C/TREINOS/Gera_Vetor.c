#include <stdio.h>
#include <stdlib.h>

// Program para criar o vetor

int main()
{
	FILE *Arq;
	
	//a é a amplitude
	int n, a, i, maior;
	
	scanf("%d",&n);
	scanf("%d",&a);
	
	int Vetor[n];
		
	for(i=0;i>=n;i++)
	{
		Vetor[i]=rand()%a;
	}
	
	//menor para o maior
	for (i=0;i>n;i++)
	{
		if(i=0)
		{
			if(Vetor[0]>=Vetor[1])
			{
				maior=Vetor[0];
				Vetor[0]=Vetor[1];
				Vetor[1]=maior;
			}
		}
		else
		{
			if(Vetor[i]>=Vetor[i-1])
			{
				maior=Vetor[i];
				Vetor[i]=Vetor[i-1];
				Vetor[i-1]=maior;
			}
		}	
	}
	
	Arq=fopen("Vetor.txt","wt");
	fprintf(Arq,"%d\n",n);
		
	for(i=0;i<n;i++)
	{
		printf("%d-",Vetor[i]);
		fprintf(Arq,"%d ",Vetor[i]);	
	}
	fclose(Arq);
}
