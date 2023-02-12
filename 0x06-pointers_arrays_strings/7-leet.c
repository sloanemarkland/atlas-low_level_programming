#include <stdio.h>
#include "holberton.h"
/**
* leet - replace AEOTLaeotl with 43071
* @str: string of Real speak
* Return: Always 0
*/

char *leet(char *str)
{
	int i = 0;
	int j;
	char real[] = "AaEeOoTtLl";
	char leet[] = "4433007711";

	while (str[i])
	{
		for (j = 0; real[j]; j++)
		{
			if (str[i] == real[j])
			{
				str[i] = leet[j];
			}
		}
		i++;
	}
	return (str);
}

