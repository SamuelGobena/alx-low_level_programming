#include "main.h"

/**
 * _isupper - checks upper case characters
 * @c: The character introduced.
 *
 * Return: 1 if character is upper case, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
