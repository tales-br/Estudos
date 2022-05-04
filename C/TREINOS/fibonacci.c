#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int TERMO;
	
	printf ("Digite o termo: "); scanf ("%d", &TERMO);
	
	fibonacci (TERMO);
}


int fibonacci (int termo)
{
	int i, a = 1, b = 1, c;
	
	while (i <= termo)
	{
		c = a + b;
		
		i = i + 1;
				
		a = b + c;
		
		i = i + 1;
		
		b = c + a;
		
		i = i + 1;		
	}
	
	printf ("%d", c);
}



/* Fibonacci

V(t) = { 
		 1 , se t = 1
		 1 , se t = 2
		 V(t-1) + (t - 2) , se t >= 3 
		}	
		
		
	TERMO =     1   2   3   4   5   6   7   8   9
	VTERMO =	1   1   2   3   5   8   13  21  34 		

*/




