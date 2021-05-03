#include "variadic_functions.h"
/**
 *print_strings - Prints the given stirngs
 *@n: The number of arguments
 *@separator: It's in between each printed string
 *Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list vlist;
unsigned int i;
char *str;

if (separator == NULL)
separator = "";

va_start(vlist, n);

for (i = 0; i < n; i++)
{
str = va_arg(vlist, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");

va_end(vlist);
}
