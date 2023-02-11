#include "holberton.h"

/**
* cap_string - cap all words of string after ,;.!?"(){}
* @str: string of which all words should be capped
* Return: Always 0
*/

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char puncstr[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		for (j = 0; puncstr[j]; j++)
		{
			if (str[i - 1] == puncstr[j] && str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	return (str);
}
