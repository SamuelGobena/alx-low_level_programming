#include "main.h"

/**
 * flip_bits - countes the number of bits
 * @n: numbers
 * @m: the number to flip
 * Return: n or m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
