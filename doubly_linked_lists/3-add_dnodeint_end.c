#include "lists.h"
/**
 * add_dnodeint_end - adds node to end of list
 * @head: pointer to head of list
 * @n: element to add to new node
 * Return: returns a pointer to the head
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *temp = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	node->prev = temp;
	return (*head);
}
