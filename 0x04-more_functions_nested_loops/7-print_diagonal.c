#include "main.h"

/**
 * print_diagonal - a function that print a diagonal
 * @a: input number of '\' to be printed
 * Return: a diagonal
 */
void print_diagonal(int a)
{
	int cl, sc;

	if (a <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (cl = 1; cl <= a; cl++)
		{
			for (sc = 1; sc < cl; sc++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
