#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: ptr to string to print
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current)
	{
		if (!(current->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}
	return (count);
}
