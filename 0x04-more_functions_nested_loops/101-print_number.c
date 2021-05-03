#include "holberton.h"
/**
 *print_number - Prints the method
 *Return: Always 0
 */
void print_number(int n)
{
  if (n < 10)
    _putchar('0' + n % 10);
  if (n < 100)
      {
      _putchar('0' + n / 10);
      _putchar('0' + n % 10);
      }
  if (n < 1000)
    {
      _putchar('0' + n / 100);
      _putchar('0' + n / 10);
      _putchar('0' + n % 10);
    }
    if (n < 10000)
      {
      _putchar('0' + n / 1000);
      _putchar('0' + n / 100);
      _putchar('0' + n / 10);
      _putchar('0' + n % 10);
      }
}
