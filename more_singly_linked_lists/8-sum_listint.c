#include "lists.h"
/**
 * sum_listint - adds all the elements in a list
 * @head: start of the list
 * Return: the total of the elements
*/
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
