#include "lists.h"
/**
 * free_list - frees the structs
 * @head: the start of the list
*/
void free_list(list_t *head)
{
	if (head == NULL)
	{

	}
	else
	{
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head->str);
	free(head);
	}
}
