#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int begin;

	while (s[count] != '\0')
		count++;
	for (begin = 0; begin < count; begin++)
	{
		count--;
		rev = s[begin];
		s[begin] = s[count];
		s[count] = rev;
	}
}
