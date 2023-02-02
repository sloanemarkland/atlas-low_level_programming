#include "main.h"

/**
* print_diagonal - draw diagonal line
* @n: number of \'s
* Return: Always 0
*/

void print_diagonal(int n)
{
	int line;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
		for (line = 0 ; line < n ; line++)
		{
			for (space = 0 ; space < line ; space++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
}
