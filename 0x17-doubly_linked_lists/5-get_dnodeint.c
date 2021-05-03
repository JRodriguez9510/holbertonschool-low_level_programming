#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of linked list
 * @index: index to return
 *
 * Return: number of elements in linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *copy_node = head;
unsigned int cont = 0;

while (copy_node && cont < index)
{
copy_node = copy_node->next;
cont++;
}

return (copy_node);
}
