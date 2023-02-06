#include "main.h"

/**
* puts2 - print eo char
* @str: 01234
* Return: Always 0
*/

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
