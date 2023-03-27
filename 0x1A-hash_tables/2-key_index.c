#include "hash_tables.h"
/**
 * key_index - give index of the key
 * @size: of array of the hash table
 * @key: the key
 * Return: index to store key/value pair
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*call hash func passing in 'key' ptr, should return hash code for key*/
	unsigned long int hash_code = hash_djb2(key);
	/*calc index to store key/value pair*/
	/*use modulo on the hash code to get val between 0 & 'size - 1'*/
	unsigned long int index = hash_code % size;

	return (index);
}
