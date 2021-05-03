#include "holberton.h"
/**
 *introot - Calculates the natural square of a number
 *@n: The number to calculate
 *@a: The posible roots
 *Return: Always 0
 */
int introot(int n, int a)
{
if (a * a > n)
return (-1);
if (a * a == n)
return (a);
return (introot(n, a + 1));
}
/**
 *_sqrt_recursion - Gives the natural square of a number
 *@n: number to calculate square root
 *Return: the result of the function
 */
int _sqrt_recursion(int n)
{
return (introot(n, 1));
}
