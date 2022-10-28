#include "main.h"
#include <string.h>

/**
 * char *_strncpy - concatenates the string pointed to by @src.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string
 * @n: n bytes from src
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
