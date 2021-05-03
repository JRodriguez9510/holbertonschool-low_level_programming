#include "holberton.h"
/**
 *more_numbers - Prints the method
 *Return: Always 0
 */
void more_numbers(void)
{
int a, b;
for (b = 0; b < 10; b++)
{
for (a = 0; a < 15; a++)
{
if (a > 9)
{
_putchar(a / 10 + '0');
}
_putchar(a % 10 + '0');
}
_putchar(10);
}
}
