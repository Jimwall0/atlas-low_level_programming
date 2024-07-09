#include "main.h"
/**
 * set_bit - sets the value of a bit to 0 at index
 * @n: the number
 * @index: the position of the bit
 * Return: 1 on true -1 on false
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	n[0] |= 1 << index;
	return (n[0]);
}
