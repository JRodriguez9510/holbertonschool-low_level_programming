#include "holberton.h"
/**
 *_abs - Prints the method
 *@r: Variable to operate
 *Return: Always 0
 */
int _abs(int r)
{
int s;
if (r < 0)
{
s = r * (-1);
}
else
{
s = r;
}
return (s);
}
