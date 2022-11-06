#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the memory area.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned int value = b;

	for (i = 0; i < n; i++)
		s[i] = value;
	return (s);
}
