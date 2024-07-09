#include "main.h"
/**
 * flip_bits - returns the number of bits you need to toggle
 * @n: starting number
 * @m: converted number
 * Return: the total of bits fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = 1, result, total = 0;

	result = n ^ m;
	while (bit <= result)
	{
		if ((bit & result) == bit)
			total++;
		bit = bit << 1;
	}
	return (total);
}
