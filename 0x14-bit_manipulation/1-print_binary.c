#include <string.h>
#include <math.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: void
*/
void print_binary(unsigned long int n)
{
	/*
	 * if number is greater than 1, print the binary representation of
	 * the number divided by 2 (n >> 1)
	 * n >> 1 is equivalent to n / 2
	 */
	if (n > 1)
		print_binary(n >> 1);
	/* print the last digit of the number in binary format */
	_putchar((n & 1) + '0');
}
