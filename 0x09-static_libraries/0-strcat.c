#include "main.h"
#include <string.h>

/**
 * char *_strcat - concatenates the string pointed to by @src.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char leng1, leng2;

	leng1 = strlen(dest);
	leng2 = strlen(src);

	for (i = 0; i <= leng2; i++)
	{
		dest[leng1 + i] = src[i];
	}

	return (dest);
}
