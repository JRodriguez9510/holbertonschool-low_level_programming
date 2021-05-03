#include "holberton.h"
/**
 *_strlen_recursion - Calculates the lenght of a string
 *@s: string to calculate
 *Return: Always 0
 */
int _strlen_recursion(char *s)
{
if (*s)
{
return (_strlen_recursion(++s) + 1);
}
return (0);
}
