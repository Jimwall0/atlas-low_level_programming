#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end
 * @head: head of a lists
 * @n: int data type
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = (*head);

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (!(*head))
	{
		(*head) = new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (*head);
}
