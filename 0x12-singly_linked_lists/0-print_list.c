#include "lists.h"
/**
 * print_list - prints all the elements of a given list
 * @h: name of the list to print
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
unsigned int size = 0;
while (h)
{
if (h->str)
{
printf("[%i] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
size++;
}
return (size);
}
