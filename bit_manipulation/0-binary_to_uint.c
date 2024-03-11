#include "main.h"
/**
 * binary_to_uint - converts binary to base 10
 * @b: binary
 * Return: base 10
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int string = _strlen(b), sum = 0, problem = 1;
	int num = 0;

	if (b == NULL)
		return (0);
	for (num = string - 1; num >= 0; num--)
	{
		if (b[num] == '1')
			sum += problem;
		else if (b[num] != '0')
			return (0);
		problem *= 2;
	}
	return (sum);
}

/**
 * _strlen - the total length of a string
 * @string: pointer towards a string
 * Return: total length
*/
int _strlen(const char *string)
{
	int num = 0;

	while (string[num] != '\0')
	{
		num++;
	}
	return (num);
}
