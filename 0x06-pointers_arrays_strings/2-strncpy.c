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
	char len;
	
	len = strlen(src);

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = len; i < n; i++)
		dest[i] = '\0';
	return(dest);
}
