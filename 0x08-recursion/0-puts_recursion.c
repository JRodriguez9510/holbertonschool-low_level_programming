#include "holberton.h"
/**
 *_puts_recursion - Prints the given string
 *@s: string to print
 *Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar(10);
return;
}
_putchar(*s);
_puts_recursion(++s);
}
