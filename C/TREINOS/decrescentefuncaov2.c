#include <stdio.h>
#include <stdlib.h>

int decrescente (int a, int b, int c)

{
	if ((a > b) && (a > c) && (b > c))
    {
        printf ("%d %d %d", a,b,c);
    }
    else
        if ((a > b) && (a < c))
        {
            printf  ("%d %d %d", c,a,b);
        }
        else
            if ((a > b) && (a > c) && (b < c))
            {
                printf  ("%d %d %d", a,c,b);
            }
            else
                if ((a < b) && (a < c) && (b < c))
                {
                    printf  ("%d %d %d", c,b,a);
                }
                else
                    if ((a < b ) && (a < c) && (b > c))
                    {
                        printf  ("%d %d %d", b,c,a);
                    }
                    else
                        if ((a < b ) && (a > c))
                        {
                            printf  ("%d %d %d", b,a,c);
                        }
}


int main ()
{
int A,B,C;
     
    printf ("Digite um numero: "); scanf ("%d",&A);
    printf ("Digite um numero: "); scanf ("%d",&B);
    printf ("Digite um numero: "); scanf ("%d",&C);	
    
    decrescente(A,B,C);
}
