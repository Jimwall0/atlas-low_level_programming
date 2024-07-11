#include "lists.h"
/**
 * get_dnodeint_at_index - grabs node at an index
 * @head: the start of the list
 * @index: the posistion of the node to return
 * Return: the node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int number = 0;

	for (; number < index; number++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
