#include "holberton.h"
/**
 *rev_string - Prints string
 *@s: String to print backwards
 *Return: void
 */
void rev_string(char *s)
{
int i = 0, j = 0, l;
char tmp;
while (s[i] != '\0')
{
i++;
}
l = i / 2;
i = i - 1;
while (i >= l)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
i--;
j++;
}
}
