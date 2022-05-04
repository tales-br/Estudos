#include<stdlib.h>
#include<stdio.h>

int main()
{
	int vet [10]={1,2,3,4,5,6,7,8,9,10};
	int *pVet[10];
	int iCont;
	for (iCont=0;iCont<10;iCont++)
	{
		pVet[iCont] = &vet[iCont];
		
		printf("%p \n",pVet[iCont]);
		printf("%i \n",*pVet[iCont]);
	}
	

}
