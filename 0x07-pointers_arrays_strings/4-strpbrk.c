#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: The string to be searched
 * @accept: The set of bytes to be searched.
 *
 * Return: a pointer to the byte in s or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
