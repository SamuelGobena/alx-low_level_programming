#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (0);

	for (i = 0; *(str + i); i++)
	{
		ptr = (char *)malloc(i + 1 * sizeof(char));

		if (ptr == 0)
			return (0);
	}

	for (j = 0; j <= i; j++)
	{
		*(ptr + j) = *(str + j);
	}
	return (ptr);
}

