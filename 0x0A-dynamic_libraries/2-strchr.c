#include "main.h"
/**
*  _strchr - look for a letter and point to the first instance of it
* @c: character to locate
* @s: string
* Return: Always 0
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == c)
		return (s + i);
	}

	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
