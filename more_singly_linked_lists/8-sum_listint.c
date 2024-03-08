#include "lists.h"
/**
 * sum_listint = adds the integer element in the structures
 * @head: start of the list
 * Return: returns the total of the elements
*/
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
