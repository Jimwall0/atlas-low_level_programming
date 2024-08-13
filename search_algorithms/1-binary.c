#include "search_algos.h"
/**
 * binary_search - searches through an array by binary
 * @array: array to look through
 * @size: size of the array
 * @value: value being searched for
 * Return: index or -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, low = 0, high = size - 1, loop;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (high + low) / 2;
		printf("Searching in array: ");
		for (loop = low; loop <= high; loop++)
		{
			printf("%i", array[loop]);
			if (loop != high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
