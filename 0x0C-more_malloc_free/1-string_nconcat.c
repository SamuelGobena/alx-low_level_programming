#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, leng1 = 0, leng2 = 0;
	char *conc;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (*(s1 + leng1) != '\0')
		leng1++;
	while (*(s2 + leng2) != '\0')
		leng2++;
	if (n >= leng2)
		n = leng2;
	conc = malloc(sizeof(char) * (leng1 + n + 1));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < leng1; i++)
		conc[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		conc[i] = s2[j];
	conc[i] = '\0';
	return (conc);
}
