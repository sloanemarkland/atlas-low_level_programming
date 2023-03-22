#include "lists.h"
/**
 * add_dnodeint - function that adds new head to dlistint_t
 * @head: ptr to ptr to dlistint_t list
 * @n: integer data
 * Return: address of new node, or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	/* set the current head node's prev ptr to new_node */
		(*head)->prev = new_node; /*(*head is same as saying "current")*/
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
