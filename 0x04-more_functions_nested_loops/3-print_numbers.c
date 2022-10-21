#include "main.h"

/**
 * print_numbers - checks for digit (0 through 9)
 *
 * Return: Always 0;
 */
void print_numbers(void)
{
	int e;

	for (e = 48; e < 58; e++)
	{
		if (e != 50)
		{
			if (e != 52)
			{
				putchar(e);
			}
		}
	}
	putchar('\n');
}
