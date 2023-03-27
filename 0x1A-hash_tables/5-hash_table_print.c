#include "hash_tables.h"
/**
 * hash_table_print - print key/val in order they appear in array
 * @ht: hash table
 *
 * $m
 * Return: val associated with element or NULL
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current; /*ptr to hashnode struct*/
	int flag = 1; /*flag for comma or not*/
	unsigned long int index; /*index for looping thru ht*/

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0; index < ht; index++) /*loop thru buckets in ht*/
	{
		current = ht->array[index]; /*assign a ptr to first node*/
		while (search) /*loop thru nodes in bucket (linked list)*/
		{
			if (flag == 0)
				printf(", ")
			printf("'%s': '%s'", current->key, current->value);
			flag = 0; /*set flag to 0 so next key/val pair is preceded by comma*/
			current = current->next; /*move to next node in bucket*/
		}
	}
	printf("}\n");
}
