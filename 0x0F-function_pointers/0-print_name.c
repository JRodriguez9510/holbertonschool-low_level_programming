#include "function_pointers.h"
/**
 * print_name - Function to call another function to print the name
 * @name: Pointer to the name to print
 * @f: Pointer to the function in charge to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
f(name);
}
