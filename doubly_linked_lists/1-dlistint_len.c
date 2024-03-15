#include "lists.h"
/**
 * dlistint_len - returns the amount of elements
 * @h: what list to get
 * Return: the amount of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
