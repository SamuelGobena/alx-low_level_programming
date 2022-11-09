#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: length of arg
 * @argv: number of argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int line, total, change, num;
	int coins[] = {25,10,5,2,1};

	line = total = change = num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]); /*convert string to integer*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

/*Declaration*/
	while (coins[line] != '\0')
	{
		if (total >= coins[line])
		{
			num = (total / coins[line]);
			change += num;
			total -= coins[line] * num;
		}
		line++;
	}
	printf("%d\n", change);
	return (0);
}
