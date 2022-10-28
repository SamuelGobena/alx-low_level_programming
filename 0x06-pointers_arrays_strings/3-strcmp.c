#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two string values
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag = 1;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
		if (flag == 1)
		{
			return (s1[i] - s2[i]);
			i++;
		}
	}

	return (s1[i] - s2[i]);
}
