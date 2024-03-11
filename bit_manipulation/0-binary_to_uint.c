#include "main.h"
/**
 * binary_to_uint - converts binary to base 10
 * @b: binary
 * Return: base 10
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int string = strlen(b), sum = 0, problem = 1;
	int num = 0;

	for (num = string - 1; num >= 0; num--)
	{
		if (b[num] == '1')
			sum += problem;
		problem *= 2;
	}
	return (sum);
}
