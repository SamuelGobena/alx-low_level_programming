#include "main.h"
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: strat
 * @max: range end
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *i, j;

	if (min > max)
		return (NULL);

	i = malloc(sizeof(int) * (max - min +1));
	if (i == NULL)
		return (NULL);

	for (j = 0; min <= max; j++, min++)
		*(i + j) = min;

	return (i);
}
