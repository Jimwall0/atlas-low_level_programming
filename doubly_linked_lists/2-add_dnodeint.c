#include "lists.h"
/**
 * add_dnodeint - add node in the beggining of the list
 * @head: start of the list
 * @n: int data
 * Return: the address of the new element or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t (*new) = NULL;

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
	new->next = (*head);
	(*head)->prev = new;
	(*head) = new;
	return (new);
}
