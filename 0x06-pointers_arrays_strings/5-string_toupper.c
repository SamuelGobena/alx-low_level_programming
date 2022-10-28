#include "main.h"

/*
 * string_toupper - changes all lower case letters
 * @str: The string to be changed.
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
