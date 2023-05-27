#include "main.h"

/**
* print_sign - of a number
* @n: n>0, return1, print+
* Return: Always 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar ('0');
		return (0);
	}
}
