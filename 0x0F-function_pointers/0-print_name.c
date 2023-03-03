#include "function_pointers.h"

/**
 * print_name - func that prints a name
 * @name: ptr to str to be printed
 * @f: ptr to func that take arg of type char *
 * Return: when you know what the heck you're doing. aka Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
