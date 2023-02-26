#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - returns a ptr to allocated memory, if fail,
* @b: points to original string
* $mrklnd
* Return: NULL if size 0, ptr to array otherwise
*/
void *malloc_checked(unsigned int b)
{
	/**
	 * void defines ptr to unspecified type
	*/
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98); /** norml process termination with code 98 */
	}
	return (a);
}
