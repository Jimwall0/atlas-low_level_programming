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
	dlistint_t *node = NULL, *temp = *h, *anchor;
	unsigned int loop = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	while (loop < idx && temp != NULL)
	{
		temp = temp->next;
		loop++;
	}
	if (temp == NULL)
	{
		free(node);
		return (*h);
	}
	anchor = temp;
	temp = temp->prev;
	temp->next = node;
	node->prev = temp;
	node->next = anchor;
	anchor->prev = node;
	return (*h);
}
