#include "lists.h"

/**
 * add_nodeint - adds a new node at the starting point of  li-list
 * @head: pointer to the first node.
 * @n: data to insert directly to the node
 *
 * Return:the pointer to the new nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}

