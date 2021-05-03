#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - Concatenates 2 strings
 *but only n characters of the second string
 *@s1: string to concatenate
 *@s2: string to concatenate
 *@n: Numbewr of characters of the string 2
 *Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, c;
char *con;
if (s1 == NULL)
s1 = ("");
if (s2 == NULL)
s2 = ("");
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (n >= j)
n = j;
con = malloc(sizeof(char) * (i + n + 1));
if (con != NULL)
{
for (c = 0; c <= i; c++)
con[c] = s1[c];
for (c = 0; c < n; c++)
con[i + c] = s2[c];
if (c == n)
con [i + c] = '\0';
}
else
return ('\0');
return (con);
}
