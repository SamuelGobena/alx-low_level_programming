#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 & 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if ((a == 50) || (a == 52))
		{
			continue;
		}
		putchar(a);
	}
	putchar(10);
}
