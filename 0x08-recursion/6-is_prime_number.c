#include "main.h"

/**
* prime_helper - return 1 if input is prime, otherwise 0
* @i: check if prime $mrklnd
* @n: check if prime
* Return: 0 or 1
*/

int prime_helper(int i, int n)
{
	if (n == i)
	return (1);

	else if (n % i == 0)
	return (0);

	else
	return (prime_helper(i + 1, n));
}

/**
* is_prime_number - return 1 if input is prime, otherwise 0
* @n: check if prime $mrklnd
* Return: 0 or 1
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
	return (prime_helper(3, n));
	}
}
