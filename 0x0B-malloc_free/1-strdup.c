#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - return ptr to new space in mem that contains copy of a string
* @str: points to original string
* $mrklnd
* Return: NULL if size 0, ptr to array otherwise
*/

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j;
	char *copy;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	;

	copy = malloc(i * sizeof(*copy) + 1);

	if (copy == NULL)
	return (NULL);

	for (j = 0; j < i; j++)
	copy[j] = str[j];

	return (copy);
}
