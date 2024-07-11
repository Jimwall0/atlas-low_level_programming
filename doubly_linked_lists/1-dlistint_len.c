#include "lists.h"
/**
 * dlistint_len - prints the number of elements
 * @h: head of the list
 * Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
