#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string given
 * Return: converted unsigned int, 0 if fails
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int pow, decimal;
	int count;

	count = 0;
	pow = 1;
	decimal = 0;

	if (b == NULL)
		return (0);

	while (b[count] != 0)
		count++;

	count--;

	while (count >= 0)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		if (b[count] == '1')
			decimal = decimal + pow;

		pow = pow + pow;
		count--;
	}

	return (decimal);
}
