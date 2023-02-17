#include "main.h"

/**
 * _strstr - find first occurance of substring in larger string
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: pointer to sub or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int cow;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		cow = 0;

		if (haystack[cow] == needle[cow])
		{
			do {
				if (needle[cow + 1] == '\0')
					return (haystack);

				cow++;

			} while (haystack[cow] == needle[cow]);
		}
		haystack++;
	}
	return (NULL);
}
