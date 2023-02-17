#include "main.h"

/**
* _memset - write function that fills mem with constant byte
* @s: pointer $mrklnd
* @b: constant byte
* @n: space in memory to be modified
* Return: Always 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
