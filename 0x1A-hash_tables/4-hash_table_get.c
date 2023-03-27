#include "hash_tables.h"
/**
 * hash_table_get - retrieves a val associated with a key
 * @ht: hash table to update key/val pair to
 * @key: key to be indexed
 *
 * Return: val associated with element or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;

	if (ht == NULL)
		return (NULL);

	current = ht->array[key_index((const unsigned char *)key, ht->size)];

	while (current)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
