#include "lists.h"
/**
 * listint_len - Write a function that returns
 * the number of elements in a linked listint_t list.
 * @h: head of the struct list
 * Return: return the total elements in the structures
*/
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		number++;
		h = h->next;
	}
	number++;
	return (number);
}
