#include "main.h"

/**
* _strncat - concatenate 2 strings using n bytes
* @dest: s1 - Hello $mrklnd
* @src: s2 - World!
* @n: number of bytes from src
* Return: Always 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	for (; j < n && src[j]; i++, j++)
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}
