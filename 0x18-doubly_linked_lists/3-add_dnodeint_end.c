#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 * @head: double pointer to the head of the list
 * @n: integer to be stored in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail, *current;

	current = *head;

	new_tail = malloc(sizeof(dlistint_t));
	if (new_tail == NULL)
		return (NULL);

/* initialize new node */
	new_tail->n = n;
	new_tail->next = NULL;
/* add new node to end of list*/
/*if head ptr is NULL, new node becomes first node in list & pts to NULL*/
	if (*head == NULL)
	{
		new_tail->prev = NULL;
		*head = new_tail;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_tail;
		new_tail->prev = current;
	}

	return (new_tail);
}
