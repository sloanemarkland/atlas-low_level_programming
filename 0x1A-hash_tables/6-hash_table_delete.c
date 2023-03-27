#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 *
 * $m
 * Return: val associated with element or NULL
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			current = ht->array[index]->next;

			free(ht->array[index]->key);
			free(ht->array[index]->value);

			free(ht->array[index]);

			ht->array[index] = current;
		}
	}
	free(ht->array);

	ht->array = NULL;
	ht->size = 0;

	free(ht);
}
