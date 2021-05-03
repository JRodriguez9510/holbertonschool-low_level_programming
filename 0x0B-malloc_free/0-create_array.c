#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - Creates an array initialized in a specific char
 *@size: string size
 *@c: first char of the string
 *Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
if (size <= 0)
{
return ('\0');
}
s = malloc(size * sizeof(char));
if (s == NULL)
return ('\0');
for (i = 0; i < size; i++)
{
*(s + i) = c;
}
*(s + i) = '\0';
return (s);
}
