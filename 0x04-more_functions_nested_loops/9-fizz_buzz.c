#include <stdio.h>
/**
 *main - Prints the method
 *Return: Always 0
 */
int main(void)
{
int n;
for (n = 1; n < 101; n++)
{
if (n % 3 == 0 && n != 0)
printf("Fizz");
if (n % 5 == 0 && n != 0)
printf("Buzz");
if (n % 3 != 0 && n % 5 != 0)
printf("%d", n);
if (n != 100)
putchar(' ');
}
putchar(10);
return (0);
}
