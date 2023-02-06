#include "main.h"
#include "2-strlen.c"
/**
* puts_half - print second half of string
* @str: string
* Return: Always 0
*/

void puts_half(char *str)
{
	int i;
	int l;

	l = _strlen(str);

	if (l % 2 == 0)
	{
		for (i = (l / 2) ; i < l ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
		for (i = (l + 1) / 2 ; i < l ; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
