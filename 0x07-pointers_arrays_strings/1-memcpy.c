#include "holberton.h"
/**
 *_memcpy - copies string length
 *@dest: string to change
 *@src: string to add
 *@n: number of items in the secont string
 *Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
