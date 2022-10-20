#include "main.h"

/**
 * print_square - check for digit from (0 through 9)
 * @size: size of variable
 * 
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x < = size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
