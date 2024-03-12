#include "main.h"
/**
 * print_binary - converts decimal to binary
 * @n: decimal to convert
*/
void print_binary(unsigned long int n)
{
	long unsigned int bit_mask = 1;

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

/**
 * _putchar = prints a single char
 * @character = a character
 * Return: number of characters printed
*/
int _putchar(char character)
{
	return (write(1, &character, 1));
}
