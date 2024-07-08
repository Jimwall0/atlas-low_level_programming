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
	listint_t *tmp = (*head), *new = NULL, *temp = NULL;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	for (; num < idx; num++)
	{
		if (tmp == NULL)
			return (NULL);
		temp = tmp;
		if (tmp->next == NULL)
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
	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (*head);
	}
	new->next = tmp;
	temp->next = new;
	return (*head);
}
