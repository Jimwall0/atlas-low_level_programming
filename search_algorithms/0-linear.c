#include "search_algos.h"
/**
 * linear_search - searches for value in array
 * @array: array to search for value
 * @size: the size of the array
 * @value: data to find in array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t loop = 0;

	for (loop = 0; loop < size; loop++)
	{
		printf("Value checked at index [%i]\n", loop);
		if (array[loop] == value)
		{
			
		}
	}
}
