#include "main.h"

/**
* _sqrt_recursion - return the natural sqrt of a number
* @n: return sqrt of n $mrklnd
* @low: 0
* @high: number passed
* Return: int
*/

int _sqrt_helper(int n, int low, int high)
{
	int mid;
	int square;
	
	if (low > high)
	{
		return (-1); /*if we reach here, sqrt is not an int*/
	}

	mid = (low + high) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}

	else if (square < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}

	else
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /*sqrt of neg is undefined*/
	}
	return (_sqrt_helper(n, 0, n));
}
