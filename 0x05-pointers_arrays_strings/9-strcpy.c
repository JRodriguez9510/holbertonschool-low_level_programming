#include "holberton.h"
/**
 *_strcpy - Swaps 2 ints
 *@dest: integer to exchange
 *@src: integer to exchange
 *Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
int i = 0, j;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
dest[j] = *(src + j);
}
return (dest);
}
