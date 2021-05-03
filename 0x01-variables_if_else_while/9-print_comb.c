#include <stdio.h>
/**
 *main - Print the method
 *Return: Always 0
 */
int main(void)
{
int a;
for (a = 0; a <= 9; a++)
{
putchar(48 + a);
if (a < 9)
{
putchar(44);
if (a < 9)
{
putchar(32);
}
}
}
putchar('\n');
return (0);
}
