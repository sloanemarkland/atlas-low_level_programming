#include "main.h"

/**
* _strlen - print length of string
* @s: string in question
* Return: Always 0
*/

int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] ; i++)
		;

	return (i);
}
