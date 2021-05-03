#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node to the beguinning of the list
 * @head: Pointer to pointer to the head of the list
 * @n: The new node content
 *
 * Return: number of elements in linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_tail, *tmp_pre;

if (!head)
return (NULL);

new_tail = malloc(sizeof(dlistint_t));
if (new_tail == NULL)
return (NULL);

new_tail->n = n;
new_tail->next = NULL;
if (!*head)
{
new_tail->prev = NULL;
*head = new_tail;
}
else
{
tmp_pre = *head;

while (tmp_pre->next)
tmp_pre = tmp_pre->next;

tmp_pre->next = new_tail;
new_tail->prev = tmp_pre;
}
return (new_tail);
}
