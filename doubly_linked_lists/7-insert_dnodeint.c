#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at an index
 * @h: pointer to the head of the list
 * @idx: index to insert the new node
 * @n: int data value for the new node
 * Return: the new head
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL, *temp = *h;
	unsigned int loop = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL || loop < idx)
	{
		temp = temp->next;
		loop++;
	}
	if (loop != idx)
		return (NULL);
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = temp;
	node->prev = temp->prev;
	temp->prev->next = node;
	return (*h);
}
