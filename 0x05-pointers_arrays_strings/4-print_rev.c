#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * count: is to count first to end
 * @s: string input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int count = 0;
	int begin, end;

	for (begin = 0; s[begin] != '\0'; begin++)
	{
		count++;
	}
	for (end = (count - 1); end >= 0; end--)
	{
		_putchar(s[end]);
	}
	_putchar('\n');
}
