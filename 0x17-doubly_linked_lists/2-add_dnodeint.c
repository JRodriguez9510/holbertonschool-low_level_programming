#include "lists.h"
/**
 * add_dnodeint - Adds a new node to the beginning of the list
 * @head: Address to the new head
 * @n: The node content
 *
 * Return: number of elements in linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_head;

new_head = malloc(sizeof(dlistint_t));
if (new_head == NULL)
return (NULL);

new_head->n = n;
new_head->prev = NULL;
new_head->next = *head;

if (*head)
(*head)->prev = new_head;

*head = new_head;

return (new_head);
}
