#include<stdio.h>

int main()
{
	FILE *Arq;
	
	Arq=fopen("alomundo.txt","w");
	
	fprintf(Arq,"Alo Mundo!");
	fclose(Arq);
	
	return 0;
}
