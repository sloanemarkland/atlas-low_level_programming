#include "main.h"

/**
* factorial - return the factorial of n
* @n: given number to evaluate $mrklnd
* Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	else
	return (n * factorial(n - 1));
}
