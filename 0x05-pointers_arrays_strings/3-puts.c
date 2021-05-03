#include "holberton.h"
/**
 *_puts - Prints string
 *@str: String to print
 *Return: Always 0
 */
void _puts(char *str)
{
int p;
for (p = 0; str[p] != '\0'; ++p)
{
_putchar(str[p]);
}
_putchar('\n');
}
