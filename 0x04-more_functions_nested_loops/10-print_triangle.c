#include "main.h"

/**
 * print_triangle - to print triangle
 * @size: size of triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
		for (a = size; a > 0; a++)
		{
			for (b = 1; b <= size; b++)
				if (b >= a)
					putchar('#');
				else
					putchar(' ');
		}
	else
		putchar('\n');
}
