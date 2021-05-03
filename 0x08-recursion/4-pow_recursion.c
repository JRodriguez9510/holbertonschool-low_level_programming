#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number to raise.
 * @y: power.
 * Return: value result.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y >= 1)
{
return (x * _pow_recursion(x, y - 1));
}
else if (y == 0)
{
return (1);
}
return (1);
}
