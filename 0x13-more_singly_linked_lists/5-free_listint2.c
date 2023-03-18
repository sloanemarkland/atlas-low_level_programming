#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: pointer to pointer to the head of the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
