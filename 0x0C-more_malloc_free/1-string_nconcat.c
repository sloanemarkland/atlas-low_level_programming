#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - returns a ptr to new mem s1
* @s1: full string
* @s2: n bytes of s2
* @n: num of bytes allowed for s2
* $mrklnd
* Return: NULL if size 0, ptr to array otherwise
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_cat, len_do, i;
	char *catdo;

	/* is s1 or s2 are null, treat as empty string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* check length of s1 & s2 */
	len_cat = 0;

	while (s1[len_cat])
		len_cat++;

	len_do = 0;

	while (s2[len_do])
		len_do++;


	/* if n is greater than s2, don't exceed s2. if n < the len of s2 */
	/* then we only want to concat the first n characters of s2 */
	if (n >= len_do)
		n = len_do;

	/* allocate mem for concat string */
	catdo = malloc(sizeof(char) * (len_cat + n + 1));

	if (catdo == NULL)
		return (NULL);

	for (i = 0; i < len_cat; i++)
		catdo[i] = s1[i];
	for (i = 0; i < n; i++)
		catdo[len_cat + i] = s2[i];
	catdo[len_cat + n] = '\0';

	return (catdo);
}
