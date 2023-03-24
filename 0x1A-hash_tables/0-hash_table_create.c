#include "hash_tables.h"
/**
 * hash_table_create - create table hash
 * @size: of array
 *
 * Return: ptr to new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newHash = NULL;

	newHash = malloc(sizeof(hash_table_t));

	if (!newHash)
		return (NULL);

	newHash->size = size;
	newHash->array = malloc(sizeof(hash_node_t *) * size);

	if (newHash->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		newHash->array[i] = NULL;
	}

	return (newHash);
}
