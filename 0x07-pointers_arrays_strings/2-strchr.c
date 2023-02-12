#include "main.h"
/**
*  - desc
* @c: character to locate
* @s: string
* Return: Always 0
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (0);
}
