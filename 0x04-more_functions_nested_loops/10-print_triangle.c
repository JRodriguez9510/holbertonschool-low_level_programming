#include "holberton.h"
/**
 *print_triangle - Prints the method
 *@size: is the length of the diagonal
 *Return: Always 0
 */
void print_triangle(int size)
{
int l, s, e;
l = size;
if (l <= 0)
_putchar(10);
if (l > 0)
{
for (l = 0; l < size; l++)
{
for (s = size - 1; s > l; s--)
{
_putchar(' ');
}
for (e = 0; e <= l; e++)
{
_putchar('#');
}
_putchar(10);
}
}
}
