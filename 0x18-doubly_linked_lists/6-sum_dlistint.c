#include "lists.h"
/**
 * sum_dlistint - return sum of all data of a dlistint_t linked list
 * @head: pointer to the head of the list
 *
 * $m
 * Return: to sender, aka nothing
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
