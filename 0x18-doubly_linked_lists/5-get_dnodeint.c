#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: pointer to the head of the list
 * @index: index of nth node (0 indexed)
 *
 * Return: to sender, aka nothing
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index && current != NULL)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
