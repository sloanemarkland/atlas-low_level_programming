#include "lists.h"
/**
 * add_nodeint_end - function that adds new tail to listint_t
 * @head: ptr to ptr to listint_t list
 * @n: integer data
 * Return: address of new node, or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *old_tail = *head;

	new_tail = malloc(sizeof(listint_t));

	if (new_tail == NULL)
		return (NULL);
	new_tail->n = n;
	new_tail->next = NULL;

	/*if list is empty, make new node the head*/
	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	}
	/* while list exists, find the last node */
	while (old_tail->next)
		old_tail = old_tail->next;

	/*set next of old_tail to point to new node*/
	old_tail->next = new_tail;

	return (new_tail);
}
