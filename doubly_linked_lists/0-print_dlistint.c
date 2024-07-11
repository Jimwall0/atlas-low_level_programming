#include "lists.h"
/**
 * print_dlistint - prints all elements in a list
 * @h: head of the list
 * Return: the head node
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int number = 0;

	while (temp)
	{
		number++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (number);
}
