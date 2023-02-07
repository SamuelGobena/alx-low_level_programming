#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: bits
 * @index: index to get the value at - indices start at 0.
 * Return: If error occurs - -1, otherwise - bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	if ((n & (1 << index)) == 0)
	return (0);

	return (1);
}

