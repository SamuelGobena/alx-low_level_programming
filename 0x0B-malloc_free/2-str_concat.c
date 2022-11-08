#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *ptr;
	char *s = "";

	if (s1 == NULL)
		s1 = s;
	if (s2 == NULL)
		s2 = s;

	for (l1 = 0; *(s1 + l1); l1++)
	{
		for (l2 = 0; *(s2 + l2); l2++)
		{
			ptr = malloc((l1 + l2 + 1) * sizeof(char));

			if (ptr == 0)
				return (0);
		}
	}

	for (i = 0; i < l1; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = l1; i <= l2; i++, j++)
	{
		*(ptr + j) = *(s2 + i);
	}
	return (ptr);
}
