#include "main.h"
/**
 * print_binary - prints the binary format of a number
 * @n: the number to be converted
*/
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1;

	if (n == 0)
		printf("%d\n", 0);
	while (bit < n)
		bit = bit << 1;
	while (bit != 0)
	{
		if ((bit & n) == 1)
			printf("%d", 1);
		else if ((bit & n) == 0)
			printf("%d", 0);
		bit = bit >> 1;
	}
}
