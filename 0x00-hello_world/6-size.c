#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{ 
	int intType;
     	float floatType;
	double doubleType;
	char charType;

	printf("Size of a char: %lu byte\n", sizeof(charType));
	printf("Size of a int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a double: %lu byte(s)\n", sizeof(longType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));

	return (0);
}
