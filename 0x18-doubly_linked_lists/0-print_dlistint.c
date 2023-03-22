#include "lists.h"
/**
 * print_dlistint - print elements of a list
 * @h: ptr to data
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
