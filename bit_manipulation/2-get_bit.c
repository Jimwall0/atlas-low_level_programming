#include "main.h"
/**
 * get_bit - gets value at index of bit
 * @n: number
 * @index: position of number
 * Return: the value of number at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int number = 1, loop = 0;

	for (; loop < index; loop++)
	{
		if (number > n)
			return (-1);
		number = (number << 1);
	}
	if ((number & n) == number)
		return (1);
	else if ((number & n) == 0)
		return (0);
	else
		return (-1);
}
