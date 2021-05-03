#include "lists.h"
/**
 * list_len - returns the number of elements in a list
 * @h: pointer to head of given list
 * Return: Number of elements within the list
 */

size_t list_len(const list_t *h)
{
unsigned int size = 0;
while (h)
h = h->next, size++;
return (size);
}
