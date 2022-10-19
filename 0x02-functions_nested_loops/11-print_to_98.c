#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print natural number from i to 98
 *@i: input number
 *Return: Always 0
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i++;
		}
	}
	else if (i > 98)
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}

