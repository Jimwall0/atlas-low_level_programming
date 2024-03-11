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
	listint_t *node = NULL, *nextnode, *temp = *head;
	unsigned int number = 0;

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
	while (*head != NULL)
	{
		if (idx - 1 == number)
		{
			nextnode = temp->next;
			temp->next = node;
			node->next = nextnode;
			return (*head);
		}
		temp = temp->next;
		number++;
	}
	return (NULL);
}
