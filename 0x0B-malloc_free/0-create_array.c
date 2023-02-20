#include "main.h"

/**
* create_array - create array of chars initialized with a specific char
* @size: unsigned int
* @c: initialize array
* $mrklnd
* Return: NULL if size 0, ptr to array otherwise
*/

char *create_array(unsigned int size, char c)
{
	unsigned int rgb;

	char *sunshine = (char*)malloc(size * sizeof(char));

	if (sunshine == NULL)
	{
		return (NULL);
	}

	for (rgb = 0; rgb < size; rgb++)
	{
		sunshine[rgb] = c;

	}
	return sunshine;
}
