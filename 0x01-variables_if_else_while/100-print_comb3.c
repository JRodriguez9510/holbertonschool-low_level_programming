#include <stdio.h>
/**
 *main - Prints the method
 *Return: Always 0
 */
int main(void)
{
int z, x, y;
for (z = 0 ; z <= 99 ; z++)
{
x = (z / 10);
y = (z % 10);
if (x != y && y != x && x < y)
{
putchar(48 + x);
putchar(48 + y);
if (z < 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
