#include "lists.h"
/**
 * delete_nodeint_at_index - delete a nod in a list
 * @head: start of the list
 * @index: position of the node to delete
 * Return: 1 on success and -1 on fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *temp = (*head), *tether = NULL;

	if (head == NULL || (*head) == NULL)
		return (-1);
	for (; num < index; num++)
	{
		tether = temp;
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	if (index == 0)
	{
		temp = temp->next;
		free((*head));
		(*head) = temp;
		return (1);
	}
	tether->next = temp->next;
	free(temp);
	return (1);
}
