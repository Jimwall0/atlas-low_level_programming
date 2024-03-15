#include "lists.h"
/**
 * add_dnodeint - adds a node to the beggining of a list
 * @head: pointer to the list
 * @n: data to be added to the list
 * Return: the head of the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (*head);
	}
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (*head);
}
