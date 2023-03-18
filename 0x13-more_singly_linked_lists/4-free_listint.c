#include "lists.h"
/**
 * free_listint - function that frees list
 * @head: ptr to head of list
 * Return: nada
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
