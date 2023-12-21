#include "search_algos.h"

/**
* binary_search - function that searches for a value in an array of
* integers using the Linear search algorithm
* @array: num of command-line args passed to program
* @size: array of pointers to command-line args
* @value: array of pointers to command-line args
* $rhmrklnd
* Return: 0
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j = size - 1;
	size_t mid;

	if (array)
	{
		while (i <= j)
		{
			printf("Searching in array: ");
			for (mid = i; mid < j; mid++)
				printf("%d, ", array[mid]);
			printf("%d\n", array[mid]);
			mid = (i + j) / 2;
			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				i = mid + 1;
			else
				j = mid - 1;
		}
	}
	return (-1);
}
