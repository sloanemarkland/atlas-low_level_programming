#include "3-calc.h"

/**
 * op_add - return sum of a&b
 * @a: int
 * @b: int
 * Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return diff of a&b
 * @a: int
 * @b: int
 * Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return product of a&b
 * @a: int
 * @b: int
 * Return: product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns a/b
 * @a: int
 * @b: int
 * Return: a/b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns a mod b
 * @a: int
 * @b: int
 * Return: remainder of div of a&b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
