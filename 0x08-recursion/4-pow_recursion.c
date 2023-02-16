#include "main.h"

/**
* _pow_recursion - return the value of x raised to the power of y
* @x: integer $mrklnd
* @y: power
* Return: x to the y
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);

	else if (y < 0)
	return (-1);
/*
 * the following recursively calls itself with the same value of x and
 * decrements y by 1 each time, until y reaches 0
*/
	else
	return (x * _pow_recursion(x, y - 1));
}
