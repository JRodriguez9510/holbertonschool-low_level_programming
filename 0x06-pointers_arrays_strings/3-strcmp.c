#include "holberton.h"
/**
 *_strcmp - compare strings
 *@s1: string to compare
 *@s2: string to compare
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
int i, j;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] == s2[i])
{
j = 0;
}
else
{
j = s1[i] - s2[i];
return (j);
}
}
return (j);
}
