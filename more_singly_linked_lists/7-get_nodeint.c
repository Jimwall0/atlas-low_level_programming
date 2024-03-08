#include "lists.h"
/**
 * get_nodeint_at_index - Grabs the integer element inside
 * a struct list
 * @head: pointer to the head node
 * @index: what specific node to stop at
 * Return: the index of the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int number = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (number == index)
		return (temp);
		number++;
	}
	return (NULL);
}
