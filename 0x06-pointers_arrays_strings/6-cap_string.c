#include "holberton.h"
/**
 *cap_string - capitalizes all words of a string
 *@s: string
 *
 *Return: char
 */
char *cap_string(char *s)
{
int i = 0, j, b;
while (s[i] != '\0')
i++;
if ((s[0] >= 97) && (s[0] <= 122))
s[0] = s[0] - 32;
for (j = 1; j < i; j++)
{
b = j - 1;
if (s[b] == 9 || s[b] == 10 || (s[b] > 31 && s[b] < 35)
|| s[b] == '(' || s[b] == ')' || s[b] == ',' || s[b] == '.'
|| s[b] == ';' || s[b] == '?' || s[b] == '{' || s[b] == '}')
if ((s[j] > 96) && (s[j] < 123))
s[j] = s[j] - 32;
}
return (s);
}
