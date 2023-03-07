#include "variadic_functions.h"
#include "stdarg.h"

/**
* print_strings - print strings followed by new line
* @separator: string to be printed btwn string$
* @n: number of strings passed to the function
* Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string_args;

	va_start(string_args, n);

	for (i = 0; i < n; i++)
	{
		char *str_chz = va_arg(string_args, char*);

		if (str_chz == NULL)
			printf("nil\n");

		else
			printf("%s", str_chz);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string_args);
}
