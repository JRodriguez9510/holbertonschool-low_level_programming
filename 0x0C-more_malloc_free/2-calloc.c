#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - Alocates memory for an array
 *@nmemb: elements
 *@size: size of bytes
  *Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *a;
if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
a[i] = 0;
return (a);
}
