#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at given position in list
 * @head: ptr to ptr to head node of list
 * @index: index of node to be deleted
 * Return: 1 if node was deleted, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node;
	listint_t *delete_node;
	unsigned int i;

	if (*head == NULL || index >= listint_len(*head))
		return (-1);

	/* if index is 0, delete head */
	if (index == 0)
	{
		delete_node = *head;
		*head = (*head)->next;
		free(delete_node);
		return (1);
	}

	/* iterate thru list until desired index or end of list */
	temp_node = *head;
	for (i = 0; temp_node != NULL && i < index - 1; i++)
		temp_node = temp_node->next;

	/* if index is out of range, return -1 */
	if (temp_node == NULL || temp_node->next == NULL)
		return (-1);

	/* delete node at desired index */
	delete_node = temp_node->next;
	temp_node->next = delete_node->next;
	free(delete_node);

	return (1);
}
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head node of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp_node = h;

	while (temp_node != NULL)
	{
		len++;
		temp_node = temp_node->next;
	}

	return (len);
}
