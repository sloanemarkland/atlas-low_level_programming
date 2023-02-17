#include "main.h"

/**
* _isalpha - check for letter
* @c: if letter, return 1, else 0
* Return: Always 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
