#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: ptr to data
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *current = h;

	while (current)
	{
		i++;
		current = current->next;
	}

	return (i);
}
