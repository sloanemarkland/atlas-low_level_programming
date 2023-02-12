#include "main.h"
/**
* _strspn - get length of prefix substring
* @s: asdf
* @accept: prefix substring
* Return: Always 0
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; accept[i]; i++)
	{
		j = 0;
		while ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
		{
			if (accept[i] == s[j])
			count++;
		}
		j++;
	}
	return (count);
}
