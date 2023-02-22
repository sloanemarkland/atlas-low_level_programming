#include "main.h"

/**
* _isdigit - check for digit
* @c: if digit, return 1, else 0
* Return: Always 0
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
