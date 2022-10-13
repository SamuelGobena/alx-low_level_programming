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

	printf("Size of a char: %i byte\n", sizeof(charType));
	printf("Size of a int: %i byte(s)\n", sizeof(intType));
	printf("Size of a double: %i byte(s)\n", sizeof(longType));
	printf("Size of a float: %i byte(s)\n", sizeof(floatType));

	return (0);
}
