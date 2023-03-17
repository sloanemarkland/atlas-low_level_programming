#include "lists.h"

/**
 * free_list - free Dobby! (free a list_t list)
 * @head: ptr to a ptr to a list_t struct
 * Return: sock to house elf
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
