#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < n; i++)
	{
		n--;
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
