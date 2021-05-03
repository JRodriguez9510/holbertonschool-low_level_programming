#include "function_pointers.h"
/**
 *int_index -Returns the index of the first element
 *for which the cmp function does not return 0
 *@array: Array
 *@size: Elements in the array to iterate and compare with cmp
 *@cmp: Pointer to function to compare values
 *Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);

if (array && size && cmp)
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);

return (-1);
}
