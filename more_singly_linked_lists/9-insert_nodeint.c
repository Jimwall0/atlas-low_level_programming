#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at n
 * @head: list of structs
 * @idx: the index of the list
 * @n: integer data type
 * Return: head node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL, *beforenode = *head, *movingnode = *head;
	unsigned int beforenode_index = 0, movingnode_index = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
		return (*head);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	while (movingnode_index != idx - 1)
	{
		movingnode = movingnode->next;
		movingnode_index++;
	}
	if (idx > 2)
	{
		while (beforenode_index != idx - 2)
		{
			beforenode = beforenode->next;
			beforenode_index++;
		}
	}
	node->next = movingnode;
	if (idx == 1)
		*head = node;
	else
	{
		beforenode->next = node;
	}
	return (*head);
}
