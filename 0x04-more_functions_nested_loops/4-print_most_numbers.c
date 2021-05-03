#include "holberton.h"
/**
 *print_most_numbers - Prints the method
 *Return: Always 0
 */
void print_most_numbers(void)
{
int a;
for (a = 0; a < 10; a++)
{
if (a != 2 && a != 4)
_putchar('0' + a);
}
_putchar(10);
}
