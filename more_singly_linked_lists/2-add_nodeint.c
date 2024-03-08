#include "lists.h"
/**
 * add_nodeint - adds a new node
 * @head: the first struct
 * @n: the integer to be entered
 * Return: new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
