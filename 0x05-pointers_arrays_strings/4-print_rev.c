#include "holberton.h"
/**
 *print_rev - Prints string
 *@s: String to print backwards
 *Return: void
 */
void print_rev(char *s)
{
int p, l, c;
for (l = 0; s[l] != '\0'; ++l)
{
c = l;
}
for (p = c; s[p] > 0; p--)
{
_putchar(s[p]);
}
_putchar('\n');
}
