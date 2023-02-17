#include "main.h"

/**
* _strcpy - copy the string pointed to by src, incl null
* @dest: points to buffer
* @src: points to string
* Return: Always 0
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
