#include <stdio.h>
/**
 * main - prints the largest prime
 *
 * Return: Always 0
 */
int main(void)
{
int i;
long int n, f;
n = 612852475143;
while (n % 2 == 0)
{
f = 2;
n = n / 2;
}
for (i = 3; i <= n; i = i + 2)
{
while (n % i == 0)
{
f = i;
n = n / i;
}
}
if (n > 2)
f = n;
printf("%ld\n", f);
return (0);
}
