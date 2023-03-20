#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: number to convert
 * @index: index of bit to be returned
 * Return: 1 or -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	/* if index is greater than the number of bits in n, return -1 */
	if (index > (sizeof(n) * 8))
		return (-1);
	/* set the value of the bit at index index to 1 */
	*n = *n | (1 << index);
	return (1);
}
