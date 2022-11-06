#include "main.h"

/**
 * _isdigit - to check a digit from (0 through 9).
 * @c: input variable
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
