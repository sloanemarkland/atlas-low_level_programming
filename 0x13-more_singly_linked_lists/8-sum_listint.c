#include "lists.h"
/**
 * sum_listint - computes the sum of all the elements in a linked list
 * @head: pointer to pointer to the head of the linked list
 *
 * Return: sum of all elements of list, or NULL
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
