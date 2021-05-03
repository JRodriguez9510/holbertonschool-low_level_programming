#include "lists.h"

/**
 * delete_dnodeint_at_index - Removes a node at a given position
 * @head: Pointer to pointer to the head of the list
 * @index: The position where the node has to be inserted
 *
 * Return: 1 if success or -1 if fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *inxd_node, *tmp_node = *head, *listnd = *head;
unsigned int idx = 0, listlng = 0;
if (!head || !(*head))
return (-1);
while (listnd)
{
listnd = listnd->next;
listlng++;
}
if (index > (listlng - 1))
return (-1);
if (tmp_node && (index == 0))
{
*head = tmp_node->next;
(*head)->prev = NULL;
free(tmp_node);
return (1);
}
while (tmp_node)
{
if (idx + 1 == index)
{
inxd_node = tmp_node->next;
if (inxd_node)
{
tmp_node->next = inxd_node->next;
if (inxd_node->next)
inxd_node->next->prev = tmp_node;
free(inxd_node);
return (1);
}
}
tmp_node = tmp_node->next;
idx++;
}
return (-1);
}
