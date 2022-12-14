#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: the chessboard to be printed.
 *
 * Returns: printes chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i1, i2;

	for (i1 = 0; a[i1][8]; i1++)
	{
		for (i2 = 0; i2 < 8; i2++)
			_putchar(a[i1][i2]);

		_putchar('\n');
	}
}
