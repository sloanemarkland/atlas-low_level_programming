#include "holberton.h"

/**
* reverse_array - reverse content of array
* @a: string to reverse
* @n: num of elements
* Return: Always 0
*/

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + (n - 1);

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
