#include "function_pointers.h"

/**
 * array_iterator - func that executes a func given as parameter
 * on ea element of an array
 * @size: size of array
 * @action: ptr to func you need to use
 * @array: given array
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i <= size; i++)
		action(array[i]);
}
