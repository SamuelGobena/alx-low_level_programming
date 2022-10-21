#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints all numbers from (0 through 9)
 *
 * Return: Always 0;
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
