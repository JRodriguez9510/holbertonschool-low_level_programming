#include "holberton.h"
/**
 *leet - encodes a string into a 1337
 *@s: character array
 *
 *Return: char
 */
char *leet(char *s)
{
int i, j;
char leet[] = "aeotl";
char leet2[] = "AEOTL";
char leet3[] = "43071";
j = 0;
while (*s != 0)
{
for (i = 0; i <= 4; i++)
{
if (*s == leet[i] || *s == leet2[i])
*s = leet3[i];
}
s++;
j++;
}
s = s - j;
return (s);
}
