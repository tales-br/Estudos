#include <stdio.h>
 
int main() 
{
	int i, a = 10, n = 50;
 
	for(i= 0 ; i <= n ; i++) 
	{
    	printf("%d\n",rand()%a);
	}
	return 0;
}

--------------------------------------------------------------------------------------
#include <stdio.h>

int geravetor (int a, int n)
{
	int vetor[n], i;
	
	for(i= 0 ; i < n ; i++) 
	{
    	vetor[i] = rand()%a;
    	printf("%d ",vetor[i]);
	}                  
	return 0;
}

int main()
{
	int A = 10, N = 10;
	geravetor (A, N);
}