#include "main.h"
#include <string.h>

/**
 * char *_strncat - concatenates the string pointed to by @src.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string
 * @n: n bytes from src
 * Return: A pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char leng1, leng2;

	leng1 = strlen(dest);
	leng2 = strlen(src);

	for (i = 0; i <= leng2 && i < n; i++)
	{
		dest[leng1 + i] = src[i];
	}

	return (dest);
}
