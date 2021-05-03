#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - Prints the method
 *@n: integer to operate
 *Return: Always 0
 */
void print_to_98(int n)
{
int i = n;
if (n < 98)
for (n = i; n <= 98; n++)
{
printf("%d", n);
if (n < 98)
printf(", ");
}
if (n > 98)
for (n = i; n >= 98; n--)
{
printf("%d", n);
if (n > 98)
printf(", ");
}
if (n == 98)
printf("%d", n);
printf("\n");
}
