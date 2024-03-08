#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer to location for list of functs
 * @n: integer data in the lists
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
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
	return (*head);
}