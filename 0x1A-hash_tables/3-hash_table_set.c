#include "hash_tables.h"
/**
 * hash_table_set - add an element to a hash table
 * @ht: hash table to update key/val pair to
 * @key: key to be indexed
 * @value: must be duped, can be empty string
 * Return: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *entry = NULL;
	char *newVal = NULL;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			newVal = strdup(value);
			free(current->value);
			current->value = newVal;
			return (1);
		}
		current = current->next;
	}
	entry = malloc(sizeof(hash_node_t));
	if (entry == NULL)
	{
		free(entry);
		return (0);
	}
	entry->key = strdup(key);
	entry->value = strdup(value);
	entry->next = ht->array[index];
	ht->array[index] = entry;
	return (1);
}
