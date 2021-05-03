#include "lists.h"
/**
 * sum_dlistint - Adds all the elements of a dlistint_t list
 * @head: head of linked list
 *
 * Return: number of elements in linked list
 */
int sum_dlistint(dlistint_t *head)
{
const dlistint_t *current = head;
int sum = 0, cont;
while (current)
{
sum = sum + (current->n);
current = current->next;
cont++;
if (current == NULL)
break;
}
return (sum);
}
