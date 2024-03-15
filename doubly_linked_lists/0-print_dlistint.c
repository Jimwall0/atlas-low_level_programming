#include "lists.h"
/**
 * print_dlistint - prints the elements in a doubly linked list
 * @h: lists
 * Return: the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
