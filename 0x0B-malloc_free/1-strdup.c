#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup -Copies a string to another memory location
 *@str: Original string
 *Return: Always 0
 */
char *_strdup(char *str)
{
int i, j = 0;
char *s;
if (str == NULL)
return (NULL);
while (str[j] != '\0')
j++;
s = malloc(sizeof(char) * (j + 1));
if (s != NULL)
{
for (i = 0; i < j; i++)
s[i] = str[i];
}
else
return (NULL);
return (s);
}
