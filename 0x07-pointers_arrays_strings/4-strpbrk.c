#include "main.h"
/**
* _strpbrk - locate first occurrence in string s
* @s: string to point to
* @accept: original string
* Return: s
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
