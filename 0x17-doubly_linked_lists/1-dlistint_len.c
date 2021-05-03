#include "lists.h"
/**
 * dlistint_len - return the number of elements of a dlistint_t list
 * @h: head of linked list
 *
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t cont = 0;
while (current)
{
current = current->next;
cont++;
}
return (cont);
}
