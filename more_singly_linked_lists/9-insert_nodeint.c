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
	listint_t *node = NULL, *beforenode, *movingnode;
	unsigned int beforenode_index = 1;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (idx > 1)
	{
		beforenode = *head;
		while (beforenode_index < idx - 1)
		{
			beforenode = beforenode->next;
			beforenode_index++;
		}
		movingnode = beforenode->next;
		beforenode->next = node;
		node->next = movingnode;
		return (*head);
	}else
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	return (NULL);
}
