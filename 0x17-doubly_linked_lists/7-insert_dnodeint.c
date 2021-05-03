#include "lists.h"
/**
 * insert_dnodeint_at_index - Adds a new node to the beguinning of the list
 * @h: Pointer to pointer to the head of the list
 * @n: The new node content
 * @idx: The position where the node has to be inserted
 *
 * Return: number of elements in linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *node_count = *h;
unsigned int cont = 0;

while (node_count && cont < idx - 1)
{
node_count = node_count->next;
cont++;
}

if (node_count || (cont == idx - 1 || idx == 0))
{
new_node = malloc(sizeof(dlistint_t));

if (new_node)
{
new_node->n = n;
if (idx == 0)
{
new_node->next = *h;
if (new_node->next)
new_node->next->prev = new_node;
new_node->prev = NULL;
*h = new_node;
}
else
{
new_node->next = node_count->next;
new_node->prev = node_count;
node_count->next = new_node;
if (new_node->next)
new_node->next->prev = new_node;
}
return (new_node);
}
}
return (NULL);
}
