#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char alphaz;

	for (alphaz = 'z' ; alphaz >= 'a' ; alphaz--)
	{
		putchar(alphaz);
	}

	putchar('\n');
	return (0);
}
