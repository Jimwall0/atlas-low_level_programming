#include "lists.h"
/**
 * add_nodeint_end - adds a new node to end of list
 * @head: start of list
 * @n: number data
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *temp = (*head);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if ((*head) == NULL)
	{
		(*head) = new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (*head);
}
