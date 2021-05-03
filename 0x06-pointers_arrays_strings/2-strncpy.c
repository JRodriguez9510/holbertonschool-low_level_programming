#include "holberton.h"
/**
 *_strncpy - Copy string
 *@dest: destination to print
 *@src: source to add
 *@n: integer to store
 *Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
