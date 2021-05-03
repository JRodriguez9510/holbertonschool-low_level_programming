#include "holberton.h"
#include <stdio.h>
/**
 *print_array - Prints the array sorted
 *@a: pointer to array
 *@n: is the number of elements of the array
 *Return: void
 */
void print_array(int *a, int n)
{
int i;
if (n <= 0)
{
printf("\n");
return;
}
for (i = 0; i < n; i++)
{
if (i != n - 1)
printf("%i, ", a[i]);
else
printf("%i\n", a[i]);
}
}
