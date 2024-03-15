#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
