#include "holberton.h"
/**
 *_strchr - copies string length
 *@c: char to find
 *@s: string to look in
 *Return: Always 0
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
else if (s[i] == '\0')
return ('\0');
}
return (0);
}
