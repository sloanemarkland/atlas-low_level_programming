#include "main.h"
#include "2-strlen.c"
/**
* rev_string - print forward then reverse
* @s: string
* Return: Always 0
*/

void rev_string(char *s)

{
	int i;
	int l;
	char *startptr;
	char *endptr;
	char temp;
	
	l = _strlen(s);
	startptr = s;
	endptr = s;

	for (i = 0 ; i < (l - 1) ; i++)
	{
		endptr++;
	}

	for (i = 0; i < (l / 2) ; i++)
	{
		temp = *endptr;
		*endptr = *startptr;
		*startptr = temp;

		startptr++;
		endptr--;
	}
}
