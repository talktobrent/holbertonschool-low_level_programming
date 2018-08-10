#include <stdio.h>
#include "holberton.h"
#include <unistd.h>

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: int to use
 * @index: binary power or place to find
 * Return: 1 if works, -1 if error
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | (1 << index);

	return (1);

}
