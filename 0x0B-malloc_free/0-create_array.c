#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars
 * @c: char type
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size <= 0)
		return (0);
	
	ptr = (char*)malloc(size * sizeof(char));
	
	if (ptr == NULL)
		return (0);
	
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	
	*(ptr + i) = '\0';
	
	return (ptr);
}
