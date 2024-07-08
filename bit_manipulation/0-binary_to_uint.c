#include "main.h"
/**
 * binary_to_uint - translate a binary to a unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 1, loop = 0, sum = 0;

	if (b == NULL)
		return (0);
	while (b[loop] != '\0')
	{
		if (b[loop] == '1' || b[loop] == '0')
		{
			loop++;
		}
		return (0);
	}
	loop--;
	for (; loop > 0; loop--)
	{
		if (b[loop] == '1')
			sum += num;
		num = num * 2;
	}
	return (sum);
}
