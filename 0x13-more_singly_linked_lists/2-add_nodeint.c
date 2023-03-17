#include "lists.h"
/**
 * add_nodeint - function that adds new head to listint_t
 * @head: ptr to ptr to listint_t list
 * @n: integer data
 * Return: address of new node, or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* set val of new node to the val of argument n */
	new_node->n = n;
	/* set  next ptr of new node to point to current (old) head */
	new_node->next = *head;
	/* update head ptr to point to new node, making it the new head */
	*head = new_node;

	return (new_node);
}
