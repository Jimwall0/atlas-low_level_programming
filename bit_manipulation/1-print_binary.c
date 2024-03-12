#include "main.h"
/**
 * print_binary - converts decimal to binary
 * @n: decimal to convert
*/
void print_binary(unsigned long int n)
{
	unsigned long int bit_mask = 1;

	while ((bit_mask << 1) <= n)
		bit_mask <<= 1;
	while (bit_mask > 0)
	{
		if ((bit_mask & n) != 0)
			_putchar(1 + '0');
		else
			_putchar(0 + '0');
		bit_mask >>= 1;
	}
}
