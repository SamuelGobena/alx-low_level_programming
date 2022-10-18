#include "main.h"
/**
 * print_alphabet_x10 - to print lower case alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	char c, d;

	for (d = 0; d <= 9; d++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
