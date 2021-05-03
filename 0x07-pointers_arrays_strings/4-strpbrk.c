#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: original pointer
 * @accept: characters to look for.
 * Return: a char.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0' ; i++)
{
for (j = 0; accept[j] != '\0' ; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return ('\0');
}
