#include "lists.h"
/**
 * get_dnodeint_at_index - gets the index of a node
 * @head: head of a doubly linked list
 * @index: the specific node we want
 * Return: the index node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int number = 0;

	if (head == NULL)
	{
		printf("No list\n");
		return (NULL);
	}
	if ((int)index < 0)
	{
		printf("Can't do that so get it right\n");
		return (NULL);
	}
	if (index < 2)
	{
		printf("Heres your head\n");
		return (head);
	}
	while (head != NULL && number <= index - 1)
	{
		head = head->next;
		number++;
	}
	if (head == NULL)
	{
		printf("You've gone past the limit or it just doesn't exist\n");
		return (NULL);
	}
	return (head);
}
