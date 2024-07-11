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

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (!(*head))
	{
		(*head) = new;
		return (*head);
	}
	new->next = (*head);
	(*head) = new;
	return (*head);
}
