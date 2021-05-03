#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types or arguments to be passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list alist;
int i = 0, orders;
char *t_s;

while (format && format[i])
{
va_start(alist, format);
while (format[i])
{
orders = 1;
switch (format[i++])
{
case 'c':
printf("%c", va_arg(alist, int));
break;
case 'i':
printf("%d", va_arg(alist, int));
break;
case 'f':
printf("%f", va_arg(alist, double));
break;
case 's':
t_s = va_arg(alist, char*);
if (t_s)
{
printf("%s", t_s);
break;
}
printf("(nil)");
break;
default:
orders = 0;
break;
}
if (format[i] && orders)
printf(", ");
}
va_end(alist);
}
printf("\n");
}
