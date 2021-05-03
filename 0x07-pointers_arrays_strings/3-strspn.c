#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: String original.
 * @accept: contains the characters to look for.
 * Return: Number of characters found.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int oc, count = 0;
for (i = 0; s[i] != '\0' ; i++)
{
oc = count;
for (j = 0; accept[j] != '\0' ; j++)
{
if (s[i] == accept[j])
{
count++;
}
}
if (oc == count)
{
return (count);
}
}
return (count);
}
