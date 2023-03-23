#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer to the head of the list
 *
 *
 * Return: to sender, aka nothing
 */
void free_dlistint(dlistint_t *head)
{
	/* initialize ptr 'current' to point to head of list */
	dlistint_t *current = head;
	dlistint_t *next;
/* iterate thru nodes */
	while (current)
	{
		/* next pointer initialized to point to next node in list */
		next = current->next;
		/* free current node */
		free(current);
		/* update 'current' ptr to pnt to next node, prev stored in 'next'*/
		current = next;
	}
}
