#include "main.h"
/**
 * print_last_digit - a function print last digit
 * @ldn: last digit number
 * Return: last digit value
 */
int print_last_digit(int ldn)
{
	int ldp;

	ldp = (ldn % 10);

	if (ldp < 0)
	{
		ldp = (-1 * ldp);
	}
	_putchar(ldp + '0');

	return (ldp);
}
