#include "main.h"

/**
* print_square - print a square
* @size: asdf
* Return: Always 0
*/

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
		for (row = 0 ; row < size ; row++)
		{
			for (column = 0 ; column < size ; column++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
}
