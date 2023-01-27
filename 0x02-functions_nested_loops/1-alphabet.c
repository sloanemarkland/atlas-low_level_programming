#include "main.h"
/**
 * main - check the code
 *
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
	return;
}
