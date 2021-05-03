#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers.
 * @l: number of args
 * @s: args
 * Return: Always 0
 */
int main(int l, char *s[])
{
int sum = 0;
char c[15];
char *convert, *input;
while (--l)
{
s++, input = *s;
sprintf(c, "%d", atoi(*s));
convert = c;
if (strcmp(input, convert) != 0)
{
printf("Error\n");
return (1);
}
sum += atoi(*s);
}
printf("%d\n", sum);
return (0);
}
