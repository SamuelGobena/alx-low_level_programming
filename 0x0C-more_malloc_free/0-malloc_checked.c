#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * @b: unsigned int
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
