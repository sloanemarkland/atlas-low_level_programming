#include "main.h"

/**
* _print_rev_recursion - print a string in reverse
* @s: string to print sm
* Return: Always 0
*/

void _print_rev_recursion(char *s)
{
	/**
	 * if string is equal to null, return. do not include new line
	 * or it will print before string.
	*/
	if (*s == '\0')
		return;

	/**
	 * otherwise, recurse to end of string and begin unwinding
	 * recursion, printing each char in reverse order
	 * this swaps order of following functions from task 0
	*/
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
