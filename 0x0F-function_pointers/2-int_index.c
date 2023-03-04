#include "function_pointers.h"

/**
 * int_index - searches for an int, return index of 1st lmnt
 * @size: size of array
 * @cmp: ptr to func used to compare values
 * @array: given array
 * Return: index of first element for which cmp does not
 * return 0. If no match, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
/*why is it not if size <= 0 return -1?*/
	if (array == NULL || cmp == NULL)
		return (-1);

/*
* loop thru array lmnts and call cmp for each
* if cmp returns non-zero, return index of element
*/
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
