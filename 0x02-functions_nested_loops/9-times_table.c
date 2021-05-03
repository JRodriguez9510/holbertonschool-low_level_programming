#include "holberton.h"
/**
 *times_table - Prints the method
 *Return: Always 0
 */
void times_table(void)
{
int a, b, p;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
p = a * b;
if (p > 9)
{
if (b != 0)
{
_putchar(44);
_putchar(32);
}
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');
}
if (p < 10)
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(p % 10 + '0');
}
}
_putchar(10);
}
}
