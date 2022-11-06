#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length.
 * @s: The string to be copied
 * @accept: The prefix to be measured
 * Return: value of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int point, value;
	unsigned int i, j;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		point = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *s)
			{
				value++;
				point = 1;
			}
		}
		if (point == 0)
			return (value);
	}
	return (value);
}
