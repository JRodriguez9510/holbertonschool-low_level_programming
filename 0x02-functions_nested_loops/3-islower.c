#include "holberton.h"
/**
 *_islower - Prints the method
 *Return: Always 0
 *@c: operative int
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
return (1);
else
return (0);
}
