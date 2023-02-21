#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenate 2 strings and return pointer to s1+s2
* @s1: cat
* @s2: dog
* $mrklnd
* Return: NULL if size 0, ptr to array otherwise
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len_cat;
	int len_dog;
	char *catdog;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_cat = 0;

	while (s1[len_cat])
		len_cat++;

	len_dog = 0;

	while (s2[len_dog])
		len_dog++;

	catdog = (char *)malloc((len_cat + len_dog + 1) * sizeof(char));

	if (catdog == NULL)
		return (NULL);

	for (i = 0; i < len_cat; i++)
		catdog[i] = s1[i];

	for (j = 0; j < len_dog; j++)
		catdog[i + j] = s2[j];
	catdog[i + j] = '\0';

	return (catdog);
}
