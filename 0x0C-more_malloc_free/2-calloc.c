#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *_calloc - a function that concatenates two strings.
 * @nmemb: string 1
 * @size: string 2
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = malloc(size * nmemb);

	if (j == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		j[i] = 0;

	return (j);
}
