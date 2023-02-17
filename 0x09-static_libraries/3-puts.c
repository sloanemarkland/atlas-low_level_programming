#include "main.h"

/**
* _puts - print a string \n to stdout
* @str: pointer $mrklnd
* Return: Always 0
*/

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
