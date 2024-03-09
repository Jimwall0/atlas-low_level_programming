#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at n
 * @head: list of structs
 * @idx: the index of the list
 * @n: an integer?
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL, *start = *head, *temp;
	unsigned int number = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (head != NULL)
	{
		while (*head != NULL)
		{
			if (idx == 0)
			{
				node->next = *head;
				*head = node;
				return (*head);
			}
			if (idx == number)
			{
				temp = (*head)->next;
				(*head)->next = node;
				*head = temp;
				node->next = *head;
				*head = start;
				return (*head);
			}
			(*head) = (*head)->next;
			number++;
		}
	}
	return (*head);
}
