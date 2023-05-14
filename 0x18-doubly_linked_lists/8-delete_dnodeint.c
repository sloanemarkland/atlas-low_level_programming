#include "lists.h"
/**
 * delete_dnodeint_at_index - does what it says
 * @head: pointer to a pointer to head of the list
 * @index: index of the node that should be deleted
 * $m
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1); /* empty list */
	}
	if (index == 0)
	{
		dlistint_t *tmp;
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	dlistint_t *current = *head;
	unsigned int i = 0;

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1); /* index out of range */
	}
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
