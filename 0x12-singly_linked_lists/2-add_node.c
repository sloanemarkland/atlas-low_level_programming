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
	static int count;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	count = 0;

	count++;
	return (new_node);
}
