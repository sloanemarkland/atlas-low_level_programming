#include "main.h"
/**
*print_alphabet_x10 - print alpha x10
*new line
*Return: Always 0
*/

void print_alphabet_x10(void)
{
	int az10x;
	int alpha;

	for (az10x = 0 ; az10x < 10 ; az10x++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
