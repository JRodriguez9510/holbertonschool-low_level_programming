#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of linked list
 *
 * Return: number of elements in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t cont = 0;
while (current)
{
printf("%d\n", current->n);
current = current->next;
cont++;
}
return (cont);
}
