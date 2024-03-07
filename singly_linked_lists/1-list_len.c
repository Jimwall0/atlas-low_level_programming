#include "lists.h"
/**
 * list_len - Lists the number of elements
 * @h: head struct
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	size_t number = 0;

	if (node == NULL)
	{
		return (0);
	}
	while (node->next != NULL)
	{
		if (node->str != NULL)
		{
			number++;
		}
		node = node->next;
	}
	if (node->str != NULL)
	{
		number++;
	}
	return (number);
}
