#include <stdio.h>
#include "holberton.h"
#include <unistd.h>

/**
 * flip_bits - finds number of bits needed to flip for both numbers to be same
 * @n: int to compare
 * @m: other into to compare
 * Return: number of bits flipped
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits;

	bits = 0;

	while (m != 0 || n != 0)
	{
		if ((n & 1) != (m & 1))
			bits++;
		m = m >> 1;
		n = n >> 1;
	}

	return (bits);
}
