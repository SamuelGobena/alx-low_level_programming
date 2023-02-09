#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: index to set value
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
