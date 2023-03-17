#include "lists.h"
/**
 * print_listint - function that prints ints
 * @h: ptr to data
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
