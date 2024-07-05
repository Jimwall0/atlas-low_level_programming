#include "lists.h"
/**
 * list_len - counts the number of elements in a list
 * @h: head of the list
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
