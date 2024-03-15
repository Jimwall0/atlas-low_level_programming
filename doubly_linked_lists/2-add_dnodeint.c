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
	node->prev = NULL;
	node->next = *head;
	node->n = n;
	*head = node;
	return (*head);
}
