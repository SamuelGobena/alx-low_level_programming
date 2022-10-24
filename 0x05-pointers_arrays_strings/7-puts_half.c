#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of string
 */
void puts_half(char *str)
{
	int i, n, lng;

	lng = 0;

	for (i = 0; str[i] != '\0'; i++)
		lng++;

	n = (lng / 2);

	if ((lng % 2) == 1)
		n = ((lng + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
