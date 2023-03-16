#include "lists.h"

/**
 * add_node - add a head node to list_t
 * @head: ptr to a ptr to a list_t struct
 * @str: ptr to const char (str) array
 * Return: ptr to a list_t struct
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
