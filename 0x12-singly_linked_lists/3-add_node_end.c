#include "lists.h"

/**
 * add_node_end - add new node to the end of a list
 * @head: ptr to a ptr to a list_t struct
 * @str: ptr to const char (str) array
 * Return: address of new element or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next) /* while there is another node in list */
		temp = temp->next; /* move to the next node in the list */

	temp->next = new_node;
	return (new_node);
}
