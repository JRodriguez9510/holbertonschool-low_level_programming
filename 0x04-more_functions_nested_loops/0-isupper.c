#include "holberton.h"
/**
 *_isupper - Prints the method
 *@c: Integer to validate
 *Return: Always 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
