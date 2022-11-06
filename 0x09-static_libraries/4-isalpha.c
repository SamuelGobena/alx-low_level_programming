#include "main.h"

/**
 * isalpha - Entry point
 *
 * @c: variable 
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (('z' > c && c > 'a') || ('Z' > c && c > 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
