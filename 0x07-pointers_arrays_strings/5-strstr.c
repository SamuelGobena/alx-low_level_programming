#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @needle: the substring of the string haystack
 * @haystack: the string used to find for the substring @needle.
 *
 * Returns: a pointer to the beginning of the located substring, 												or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;
		
		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		
		if (*j == '\0')
			return (haystack);
	}

return ('\0');
}
