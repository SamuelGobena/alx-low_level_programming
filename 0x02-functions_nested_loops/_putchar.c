#include <unistd.h>
/**
 * _putchar - to write the character c to stdout
 * Return: Always on 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
