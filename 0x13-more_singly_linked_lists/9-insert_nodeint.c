#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at given position in list
 * @head: ptr to ptr to the head node
 * @idx: index where the new node should be added
 * @n: int val to be stored in new node
 * Return: sum of all elements, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* if idx is 0, make new node the new head */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/*iterate thru list until desired index or end of list*/
	for (i = 0; temp_node != NULL && i < idx - 1; i++)
		temp_node = temp_node->next;

	/* If idx is out of range, return NULL */
	if (temp_node == NULL || temp_node->next == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Insert new node into list */
	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
