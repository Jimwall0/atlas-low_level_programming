#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: start of the list
 * @idx: index of node to insert
 * @n: int data variable
 * Return: the head of the list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = (*head), *new = NULL;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	for (; num < idx - 1; num++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (*head);
}
