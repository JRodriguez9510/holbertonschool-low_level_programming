#include "holberton.h"
/**
 *string_toupper - convert lowercased letters into uppercased letters
 *@i: character
 *Return: char
 */
char *string_toupper(char *i)
{
int j;
for (j = 0; i[j] != '\0'; j++)
{
if (i[j] >= 'a' && i[j] <= 'z')
{
i[j] = i[j] - 32;
}
}
return (i);
}
