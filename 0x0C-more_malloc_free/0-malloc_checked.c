#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - copies string length
 *@b: string to change
 *Return: Void
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
