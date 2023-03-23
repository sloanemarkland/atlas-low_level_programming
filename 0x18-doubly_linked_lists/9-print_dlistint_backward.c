#include "lists.h"
/**
 * print_dlistint_backward - does what it says
 * @h: pointer to the head of the list
 *
 * $m
 * Return: number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current->next != NULL)
		current = current->next;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
		count++;
	}

	return (count);
}
