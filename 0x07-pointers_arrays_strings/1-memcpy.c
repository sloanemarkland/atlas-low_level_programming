#include "main.h"

/**
* _memcpy - copy memory area
* @dest: destination
* @src: original area
* @n: num of bytes
* Return: Always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
