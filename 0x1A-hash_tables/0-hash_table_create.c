#include "hash_tables.h"
/**
 * hash_table_create - create table hash
 * @size: of array
 *
 * Return: ptr to new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int *hash_table;

	hash_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);

	hash_table->size = size;

	return (hash_table);
}
