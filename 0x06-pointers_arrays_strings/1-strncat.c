#include "holberton.h"

/**
* _strncat - concatenate 2 strings using n bytes
* @dest: s1 - Hello
* @src: s2 - World!
* @n: number of bytes from src
* Return: Always 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
