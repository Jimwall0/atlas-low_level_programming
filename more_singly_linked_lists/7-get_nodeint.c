#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at the nth index
 * @head: Start of the list
 * @index: index to grab
 * Return: the node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	for (; num < index; num++)
	{
		head = head->next;
	}
	return (head);
}
