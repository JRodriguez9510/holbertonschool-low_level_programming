#include "function_pointers.h"
/**
 *array_iterator - Execute a function on each given element of an array
 *@array: Array
 *@size: Elements to iterate
 *@action: Function executed on given element
 *Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && size && action)
for (i = 0; i < size; i++)
action(array[i]);
}
