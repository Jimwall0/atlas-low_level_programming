#include "main.h"
/**
 * print_binary - prints the binary format of a number
 * @n: the number to be converted
*/
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1;
	unsigned long int max = 0xFFFFFFFFUL;

	while (bit < n)
		bit = bit << 1;
	if (n > max)
		n = max;
	while (bit != 0)
	{
		if (bit > n && n != 0)
			bit = bit >> 1;
		if ((bit & n) == bit)
			putchar('1');
		else
			putchar('0');
		bit = bit >> 1;
	}
}
