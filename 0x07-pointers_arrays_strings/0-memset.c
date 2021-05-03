#include "holberton.h"
/**
 *_memset - Swaps 2 ints
 *@s: memory pointer
 *@b: constant byte
 *@n: The number of bytes
 *Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
