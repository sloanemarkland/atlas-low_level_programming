#include "main.h"

/**
* swap_int - trade value of variables
* @a: swap this
* @b: to this
* Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
