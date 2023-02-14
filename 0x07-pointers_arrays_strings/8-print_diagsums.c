#include "main.h"
/**
 * print_diagsums - print sum of two diagonals
 * @a: array pointer
 * @size: size of array
 * Return: 0
*/

void print_diagsums(int *a, int size)
{
	int i;
	int criss = 0;
	int cross = 0;

	for (i = 0; i < size; i++)
	{
		criss += a[(size + 1) * i];
	}

	for (i = 0; i < size; i++)
	{
		cross += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", criss, cross);
}
