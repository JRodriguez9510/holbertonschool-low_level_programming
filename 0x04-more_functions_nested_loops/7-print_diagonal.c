#include "holberton.h"
/**
 *print_diagonal - Prints the method
 *@n: is the length of the diagonal
 *Return: Always 0
 */
void print_diagonal(int n)
{
int l, s;
l = n;
if (l <= 0)
_putchar(10);
if (l > 0)
{
for (l = 0; l < n; l++)
{
for (s = 0; s < l; s++)
{
_putchar(' ');
}
_putchar(92);
_putchar(10);
}
}
}
