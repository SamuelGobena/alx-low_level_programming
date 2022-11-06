#include "main.h"

/**
 * _strcpy - copy the pointer to variable
 * @src: the pointer
 * @dest: pointer to destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (d);
}
