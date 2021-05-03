#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - Creates an array of int
 *@min: first element of the array
 *@max: last element of the array
 *Return: Always 0
 */
int *array_range(int min, int max)
{
int *m, i, j = 0;

if (min > max)
return (NULL);

m = malloc(sizeof(int) * (max - min + 1));

if (m == NULL)
return (NULL);

for (i = min; i <= max; i++, j++)
m[j] = i;

return (m);
}
