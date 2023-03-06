#include "variadic_functions.h"
#include "stdarg.h"

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: const unsigned int
* Return: sum, if n = 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	/* pointer to start of variadic list*/
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
