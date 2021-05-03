#include "holberton.h"
/**
 *print_line - Prints the method
 *@n: Variable to compare
 *Return: Always 0
 */
void print_line(int n)
{
int l;
l = n;
if (n <= 0)
_putchar(10);
if (n > 0)
{
for (n = 0; n < l; n++)
_putchar('_');
_putchar(10);
}
}
