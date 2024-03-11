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
	listint_t *node = NULL, *temp, *temp2, *check = *head;
	unsigned int index = 1, max = 1;

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
	while (check != NULL)
	{
		check = check->next;
		max++;
	}
	if (idx > max)
		return (NULL);
	if (*head != NULL)
	{
		if (idx < 2)
		{
			node->next = *head;
			*head = node;
		}
		else
		{
			temp = *head;
			while (index < idx)
			{
				temp = temp->next;
				index++;
			}
			temp2 = temp;
			temp = temp->next;
			temp2->next = node;
			node->next = temp;
		}
	}
	else 
		return (NULL);
	return (*head);
}
