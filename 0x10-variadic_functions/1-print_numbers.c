#include "variadic_functions.h"
#include "stdarg.h"
/**
* print_numbers - print numbers followed by a new line
* @separator: string to be printed between number$
* @n: number of ints passed to the function
* Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list print_args;

	va_start(print_args, n);

	/*loop over args in list and print them*/
	for (i = 0; i < n; i++)
	{
		/*retrieve next arg from list with va_arg*/
		num = va_arg(print_args, int);
		/*print number and separator (if not the last number)*/
		printf("%d", num);

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_args);
}
