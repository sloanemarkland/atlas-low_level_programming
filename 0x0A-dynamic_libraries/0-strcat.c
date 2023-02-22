#include "main.h"

/**
* _strcat - concatenate dest+src+\0
* @dest: destination
* @src: source
* Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
