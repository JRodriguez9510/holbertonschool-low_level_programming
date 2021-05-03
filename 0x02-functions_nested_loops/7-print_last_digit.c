#include "holberton.h"
/**
 *print_last_digit - Prints the method
 *@r: The int to operate
 *Return: Always s
 */
int print_last_digit(int r)
{
int s;
s = (r % 10);
if (s < 0)
{
s = s * -1;
}
_putchar(s + '0');
return (s);
}
