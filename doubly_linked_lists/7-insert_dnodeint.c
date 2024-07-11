#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @h: start of a list
 * @idx: position of the new node to insert
 * @n: new int data
 * Return: the list or NULL on failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = (*h), *new = NULL, *prev = NULL;
	unsigned int number = 0;

	if (h == NULL)
		return (NULL);
	for (; number < idx; number++)
	{
		if (temp == NULL)
			return (NULL);
		prev = temp;
		temp = temp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if ((*h)->next == NULL)
		return (add_dnodeint_end(h, n));
	else if (idx == 0 || (*h) == NULL)
		return (add_dnodeint(h, n));
	else if ((*h) == NULL)
	{
		(*h) = new;
		return (*h);
	}
	new->n = n;
	new->prev = prev;
	new->next = temp;
	prev->next = new;
	temp->prev = new;
	return (*h);
}
