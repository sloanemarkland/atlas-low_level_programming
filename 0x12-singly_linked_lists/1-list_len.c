#include "lists.h"

/**
 * list_len - function that returns num of elements in a linked list_t list
 * @h: ptr to string to print
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *node_ct;

	for (node_ct = h; node_ct != NULL; node_ct = node_ct->next)
	{
		if (node_ct->str)
		count++;
	}
	return (count);
}
