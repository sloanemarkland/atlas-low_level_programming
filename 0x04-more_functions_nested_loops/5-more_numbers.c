#include "main.h"

/**
* more_numbers - 0-14 10x
*
* Return: Always 0
*/

void more_numbers(void)
{
	int numx10;
	int num;

	for (numx10 = 0 ; numx10 <= 9 ; numx10++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num > 9)
			{
				_putchar ((num / 10) + '0');
			}
		_putchar((num % 10) + '0');
		}
	_putchar('\n');
	}
}
