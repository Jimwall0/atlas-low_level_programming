#include "main.h"
/**
 * clear_bit - clears a bit to 0
 * @n: the number
 * @index: index of the bit to clear
 * Return: 1 on true and -1 on false
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!index)
		return (-1);
	n[0] &= ~(1 << index);
	return (1);
}
