#include "lists.h"
/**
 * add_nodeint_end - function that adds new tail to listint_t
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
}
