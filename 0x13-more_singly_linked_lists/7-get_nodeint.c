#include "lists.h"
/**
 * get_nodeint_at_index - return nth node
 * @head: pointer to pointer to the head of the linked list
 * @index: index of node (0-indexed)
 * Return: nth node of list, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	/*iterate through linked list from head until NULL or index is found*/
	while (current != NULL && i < index)
	{
		/*update current node ptr to pt to next node*/
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
