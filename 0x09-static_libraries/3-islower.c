#include "main.h"
/**
 * _islower - describe function to ckeck for lowercase character
 *@c: input letter
 * Return: 1 if int c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
