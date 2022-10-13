#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{ 
	int intType;
     	float floatType;
	char charType;
	long int longintType;
	long long int longlongintType;

	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longintType));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longlongintType));

	return (0);
}
