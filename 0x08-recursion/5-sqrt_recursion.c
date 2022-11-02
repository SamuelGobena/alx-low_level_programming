#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input
 * Return: success 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt(n, (n+1)));
}
