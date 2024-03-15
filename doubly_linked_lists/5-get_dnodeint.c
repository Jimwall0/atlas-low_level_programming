#include "lists.h"
/**
 * get_dnodeint_at_index - gets the index of a node
 * @head: head of a doubly linked list
 * @index: the specific node we want
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int number = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL && number <= index - 1)
	{
		head = head->next;
		number++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
