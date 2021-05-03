#include <stdio.h>
/**
 *main - Print the method
 *Return: Always 0
 */
int main(void)
{
int a;
for (a = 0; a <= 99; a++)
{
putchar(48 + a / 10);
putchar(48 + a % 10);
if (a < 99)
{
putchar(44);
if (a < 99)
{
putchar(32);
}
}
}
putchar('\n');
return (0);
}
