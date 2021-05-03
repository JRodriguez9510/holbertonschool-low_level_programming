#include "holberton.h"
/**
 *_strlen - Swaps 2 ints
 *@s: String to count
 *Return: Always 0
 */
int _strlen(char *s)
{
int l = 0;
while (s[l] != '\0')
{
++l;
}
return (l);
}
