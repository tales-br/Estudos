#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 10, x = 3, i;
	
	for (i = 1; i <= n; i = i + 1)
	{
		if (i % x == 0)
			printf ("\n%d", i);
	}
		printf ("\n%d", i);
}
