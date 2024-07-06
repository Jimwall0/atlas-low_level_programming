#include "lists.h"
/**
 * add_nodeint - adds a node to the head of list
 * @head: start of a list
 * @n: number data
 * Return: pointer to the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
