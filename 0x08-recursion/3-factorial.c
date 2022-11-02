#include "main.h"

/**
 * factorial - eturns the factorial of a given number.
 * @n: input
 * Return: Succes 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}				
