#include "main.h"
/**
 * print_alphabet - printing alphabet lowercase,
 * new line
 * Return: Always 0
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		_putchar(alpha);
	}

	putchar('\n');
}
