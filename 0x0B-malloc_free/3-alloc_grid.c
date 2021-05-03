#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Pointer to a 2-D array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer to the array. NULL is size is 0 or fails.
 */
int **alloc_grid(int width, int height)
{
int i, j, k;
int **grd;
if (width <= 0 || height <= 0)
return (NULL);
grd = malloc(sizeof(int *) * height);
if (grd == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grd[i] = malloc(sizeof(int) * width);
if (grd[i] == NULL)
{
for (k = 0; k < i; k++)
free(grd[k]);
free(grd);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
*(grd[i] + j) = 0;
}
return (grd);
}
