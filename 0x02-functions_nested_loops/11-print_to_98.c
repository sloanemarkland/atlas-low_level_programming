#include "main.h"
#include <stdlib.h>

/**
* print_to_98 - number n to 98
* @n: starting int
* Return: Always 0
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n ; n < 98 ; n++)
		{
			printf("%d, ", n);
		}
	}

	else if (n > 98)
	{
		for (n = n ; n > 98 ; n--)
		{
			printf("%d, ", n);
		}
	}

	printf("98\n");
}
