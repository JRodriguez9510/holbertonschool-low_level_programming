#include "holberton.h"
/**
 *print_alphabet_x10 - Prints the method
 *Always 0
 */
void print_alphabet_x10(void)
{
int i, j = 0;
while (j < 10)
{
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
j++;
_putchar('\n');
}
}
