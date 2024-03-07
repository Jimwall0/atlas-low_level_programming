#include "lists.h"
/**
 * list_len - Lists the number of elements
 * @h: head struct
*/
size_t print_list(const list_t *h)
{
	list_t *node = h;
	size_t number = 0;

	while (node->next !- NULL)
	{
		number++;
	}
	number++;
	return(number);
}