#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allo mem 4 arr of nmemb lmnts of "size" bytes ea. R ptr to allo mem
* @nmemb: num of elements in array
* @size: num of bytes in ea element of array
* $mrklnd
* Return: ptr to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
