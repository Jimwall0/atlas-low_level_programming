#include "lists.h"
/**
 * free_listint - frees list after use
 * @head: what lists we are freeing
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
	{

	}
	else
	{
		free(head);
	}
}
