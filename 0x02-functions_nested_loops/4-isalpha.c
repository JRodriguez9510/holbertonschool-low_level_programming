#include "holberton.h"
/**
 *_isalpha - Prints the method
 *@c: Opertaive int
 *Return: Always 0
 */
int _isalpha(int c)
{
if (c > 'A' && c < 'z')
return (1);
else
return (0);
}
