#include "lists.h"
/**
 * pop_listint - frees a linked list and sets head to NULL
 * @head: pointer to pointer to the head of the linked list
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head == NULL)
	{
		return (0);
	}

	/*create temp ptr to first node*/
	temp = *head;
	/*get data of first node*/
	n = temp->n;
	/*move head ptr to next node*/
	*head = (*head)->next;
	free(temp);
	/*return data of popped node*/
	return (n);
}
