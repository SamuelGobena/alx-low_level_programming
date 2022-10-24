#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
