#include "main.h"

/**
*_islower - check the code.
*@c: if c is lower = 1, else 0
*Return: Always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
