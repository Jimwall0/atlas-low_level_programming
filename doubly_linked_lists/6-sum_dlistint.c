#include "lists.h"
/**
 * sum_dlistint - adds all the elements in a list together and returns it
 * @head: the start of the list
 * Return: the total amount
*/
int sum_dlistint(dlistint_t *head)
{
	int number = 0;

	while (head != NULL)
	{
		number += head->n;
		head = head->next;
	}
	return (number);
}
