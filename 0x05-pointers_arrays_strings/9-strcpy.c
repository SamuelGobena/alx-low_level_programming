#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: destination of the string
 * @src: string source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *target = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (target);
}
