#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: character input
 * Return: length of input
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char leng = s[0];

	while (leng != '\0')
	{
		sum++;
		leng = s[i++];
	}

	return (sum);
}
