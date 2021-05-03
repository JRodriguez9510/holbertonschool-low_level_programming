#include "variadic_functions.h"
/**
 *print_numbers - Prints the given numbers
 *@n: The number of arguments
 *@separator: It's in between each number printed
 *Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list vlist;
unsigned int i;

va_start(vlist, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(vlist, int));
if (separator && i < n - 1)
printf("%s", separator);
}

printf("\n");

va_end(vlist);
}
