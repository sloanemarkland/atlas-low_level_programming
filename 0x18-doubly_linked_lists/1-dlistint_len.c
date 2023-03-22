#include "lists.h"
/**
 * dlistint_len - return number of elements in list
 * @h: ptr to data
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *current = h;

	while (current)
	{
		i++;
		current = current->next;
	}
	
	return (i);
}
